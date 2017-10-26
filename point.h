#ifndef POINT
#define POINT

#include <QPoint>
#include "settings.h"

class Point
{
    int coordinates[2];
    Settings *settings;

public:
    Point();
    Point(int a, int b);
    int getCoordinate(int index);
    void set_coordinate(int index, int value);
    void clone(Point *point);
};

#endif // POINT

