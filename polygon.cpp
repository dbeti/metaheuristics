#include "polygon.h"
#include "drawing.h"

MyPolygon::MyPolygon()
{
    settings = Settings::getInstance();
    points = new Point[settings->numberOfPolygonPoints];
}

MyPolygon::~MyPolygon()
{
    delete[] points;
}

void MyPolygon::swapPoints(Point &p1, Point &p2)
{
    Point tmp;
    tmp.clone(&p1);
    p1.clone(&p2);
    p2.clone(&tmp);
}

// A utility function to find next to top in stack
Point MyPolygon::nextToTop(stack<Point> &S)
{
    Point p;
    p.clone(&S.top());
    S.pop();
    Point res;
    res.clone(&S.top());
    S.push(p);
    return res;
}

// A utility function to return square of distance between p1 and p2
int MyPolygon::distance(Point p1, Point p2)
{
    return (p1.getCoordinate(0) - p2.getCoordinate(0))*(p1.getCoordinate(0) - p2.getCoordinate(0))*
            (p1.getCoordinate(0) - p2.getCoordinate(0))*(p1.getCoordinate(0) - p2.getCoordinate(0))+
            (p1.getCoordinate(1) - p2.getCoordinate(1))*(p1.getCoordinate(1) - p2.getCoordinate(1))*
            (p1.getCoordinate(1) - p2.getCoordinate(1))*(p1.getCoordinate(1) - p2.getCoordinate(1));
}

// To find orientation of ordered triplet (p, q, r).
// The function returns following values
// 0 --> p, q and r are colinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int MyPolygon::orientation(Point p, Point q, Point r)
{
    int value = (q.getCoordinate(1) - p.getCoordinate(1))*(r.getCoordinate(0) - q.getCoordinate(0))-
                (q.getCoordinate(0) - p.getCoordinate(0))*(r.getCoordinate(1) - q.getCoordinate(1));
    if(value == 0)
        return 0;
    else if(value > 0)
        return 1;
    else
        return 2;
}
void MyPolygon::grahamScan()
{
    //find the most bottom point
    int minCoordinateY = points[0].getCoordinate(1);
    int minIndex = 0;

    for(int i = 1; i < settings->numberOfPolygonPoints; ++i)
    {
        int y = points[i].getCoordinate(1);

        //pick the most-bottom point or choose the left one in case of tie
        if((y < minCoordinateY) || (minCoordinateY == y && points[i].getCoordinate(0) < points[minIndex].getCoordinate(0)))
        {
            minCoordinateY = points[i].getCoordinate(1);
            minIndex = i;
        }
    }
    //place the most bottom point at first position
    swapPoints(points[0], points[minIndex]);

    //Sort n-1 points with respect to the first point. A point p1 comes before p2 in sorted output
    //if p2 has larger polar angle (in counterclockwise direction) than p1

    point0.clone(&points[0]);
    for(int i = 1; i < settings->numberOfPolygonPoints; ++i)
    {
        for(int j = i + 1; j < settings->numberOfPolygonPoints; ++j)
        {
            int orient = orientation(point0, points[i], points[j]);
            if(orient == 0)
            {
                if(distance(point0, points[j]) >= distance(point0, points[i]))
                    swapPoints(points[i], points[j]);
            }
            else if(orient == 1)
                swapPoints(points[i], points[j]);


        }
    }
    //qsort(&points[1], settings->numberOfPolygonPoints, sizeof(Point), compare);

    stack<Point> S;
    for(int i = 0; i < 3; ++i)
        S.push(points[i]);

    for(int i = 3; i < settings->numberOfPolygonPoints; ++i)
    {
        // Keep removing top while the angle formed by points next-to-top,
        // top, and points[i] makes a non-left turn
        while((S.size() != 1) && (orientation(nextToTop(S), S.top(), points[i]) != 2))
            S.pop();

        S.push(points[i]);
    }


    int size = S.size();
    //settings points
    for(int i = 0; i < settings->numberOfPolygonPoints; ++i)
    {
        if(i < size)
        {
            points[i].clone(&S.top());
            S.pop();
        }
        else
        {
            points[i].clone(&points[size-1]);
        }
    }
}

Point MyPolygon::get_point(int index)
{
    return points[index];
}

void MyPolygon::set_point(int index, int coordinateX, int coordinateY)
{
    points[index].set_coordinate(0, coordinateX);
    points[index].set_coordinate(1, coordinateY);
}

Brush MyPolygon::getBrush()
{
    return brush;
}

void MyPolygon::setBrush(int red, int green, int blue)
{
    brush.set_color(0, red);
    brush.set_color(1, green);
    brush.set_color(2, blue);
}

void MyPolygon::generatePoints()
{
    for(int i = 0; i < settings->numberOfPolygonPoints; ++i)
    {
        points[i].set_coordinate(0, settings->generatorInt.get(0, settings->widthHeight));
        points[i].set_coordinate(1, settings->generatorInt.get(0, settings->widthHeight));
    }
}

void MyPolygon::mutate(bool *isMutated)
{
     //izmutiraj brush
    if(WillMutate(2))   //velike mutacije
    {
        if(WillMutate(settings->globalPointMutationRate))
        {
            brush.set_color(0,settings->generatorInt.get(0, 255));
            *isMutated = true;
        }
        if(WillMutate(settings->globalPointMutationRate))
        {
            brush.set_color(1,settings->generatorInt.get(0, 255));
            *isMutated = true;
        }
        if(WillMutate(settings->globalPointMutationRate))
        {
            brush.set_color(2,settings->generatorInt.get(0, 255));
            *isMutated = true;
        }
   }
    else   //sitne mutacije
    {
        if(WillMutate(settings->localBrushMutationRate))
        {
            brush.set_color(0,brush.get_color(0)+settings->generatorInt.get(-settings->minMutationBrush, settings->minMutationBrush));
            *isMutated = true;
        }
        if(WillMutate(settings->localBrushMutationRate))
        {
            brush.set_color(1,brush.get_color(1)+settings->generatorInt.get(-settings->minMutationBrush, settings->minMutationBrush));
            *isMutated = true;
        }
        if(WillMutate(settings->localBrushMutationRate))
        {
            brush.set_color(1,brush.get_color(1)+settings->generatorInt.get(-settings->minMutationBrush, settings->minMutationBrush));
            *isMutated = true;
        }
    }

    //izmutiraj tocke
    for(int i = 0; i < settings->numberOfPolygonPoints; ++i)
    {
        //minimum mutation of points
        if(WillMutate(settings->localPointMutationRate))
        {
            int X = points[i].getCoordinate(0) + settings->generatorInt.get(-settings->minMutationPoints, settings->minMutationPoints);
            int Y = points[i].getCoordinate(1) + settings->generatorInt.get(-settings->minMutationPoints, settings->minMutationPoints);

            points[i].set_coordinate(0, X);
            points[i].set_coordinate(1, Y);

            if(settings->convex)
                grahamScan();
            *isMutated = true;
        }
        else if(WillMutate(settings->localPointMutationRate))
        {
            int X = points[i].getCoordinate(0) + settings->generatorInt.get(-settings->midMutationPoints, settings->midMutationPoints);
            int Y = points[i].getCoordinate(1) + settings->generatorInt.get(-settings->midMutationPoints, settings->midMutationPoints);

            points[i].set_coordinate(0, X);
            points[i].set_coordinate(1, Y);

            if(settings->convex)
                grahamScan();

            *isMutated = true;
        }

        else if(WillMutate(settings->globalPointMutationRate))
        {
            points[i].set_coordinate(0, settings->generatorInt.get(0, settings->widthHeight));
            points[i].set_coordinate(1, settings->generatorInt.get(0, settings->widthHeight));

            if(settings->convex)
                grahamScan();
            *isMutated = true;
        }
    }

    //izmutiraj polygon
    if(WillMutate(settings->globalPolygonMutationRate))
    {
        generatePoints();
        if(settings->convex)
            grahamScan();
        *isMutated = true;
    }
}

void MyPolygon::initialize(){
    generatePoints();   //generiram tocke
    if(settings->convex)
        grahamScan();
    for(int i=0; i<3; i++)
        brush.set_color(i,settings->generatorInt.get(0, 255));
}

bool MyPolygon::WillMutate(int uvjet){
    if(settings->generatorInt.get(0, uvjet) == 1)
        return true;
    else
        return false;
}
void MyPolygon::clone(MyPolygon *polygon){

    for(int i = 0; i < settings->numberOfPolygonPoints; ++i)
        set_point(i, polygon->get_point(i).getCoordinate(0),polygon->get_point(i).getCoordinate(1));
    setBrush(polygon->getBrush().get_color(0), polygon->getBrush().get_color(1), polygon->getBrush().get_color(2));

}
