#ifndef POLYGON
#define POLYGON

#include "point.h"
#include "brush.h"
#include <cmath>
#include <stack>


class MyPolygon
{
    Point *points = NULL;
    Brush brush;
    Settings *settings;
    Point point0; //starting point for grahamScan

public:
    MyPolygon();
    void generatePoints();
    void mutate(bool *isMutated);
    Point get_point(int index);
    void set_point(int index, int coordinateX, int coordinateY);
    Brush getBrush();
    void setBrush(int red, int green, int blue);
    MyPolygon clone();
    void clone(MyPolygon *polygon);
    void initialize();
    bool WillMutate(int condition);
    ~MyPolygon();
    void grahamScan();
    void swapPoints(Point &p1, Point &p2);
    Point nextToTop(stack<Point> &S);
    int distance(Point p1, Point p2);
    int orientation(Point p, Point q, Point r);

};

#endif // POLYGON

