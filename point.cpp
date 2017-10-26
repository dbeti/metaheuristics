#include "point.h"

Point::Point()
{
   coordinates[0] = 0;
   coordinates[1] = 0;
   settings = Settings::getInstance();
}

Point::Point(int a = 0 , int b = 0 )
{
    coordinates[0] = a;
    coordinates[1] = b;
    settings = Settings::getInstance();
}

int Point::getCoordinate(int index)
{
    return coordinates[index];
}

void Point::set_coordinate(int index, int value)
{
    if ( value < 0 )
        coordinates[index] = 0;
    else if(value > settings->widthHeight)
        coordinates[index] = settings->widthHeight;
    else
        coordinates[index] = value;
}

void Point::clone(Point *point)
{
    coordinates[0] = point->getCoordinate(0);
    coordinates[1] = point->getCoordinate(1);
}

