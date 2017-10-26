#ifndef BRUSH_H
#define BRUSH_H

#include "generator.h"
#include "settings.h"

class Brush
{
    int colors[4];
    Settings *settings;

public:
    Brush();
    int get_color(int index);
    void set_color(int index, int value);
    Brush clone();
};

#endif // BRUSH_H

