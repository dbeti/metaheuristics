#include "brush.h"

Brush::Brush()
{
    settings = Settings::getInstance();
    for(int i = 0; i < 3; ++i)
        colors[i] = settings->generatorInt.get(0,255);
    colors[3] = settings->alpha;
}

int Brush::get_color(int index)
{
    return colors[index];
}

void Brush::set_color(int index, int value)
{
    if( value < 0 )
            value = 0;
    if( value > 255 )
            value = 255;
    colors[index] = value;
}

Brush Brush::clone()
{
    Brush newBrush;
     for(int i = 0; i < 3; ++i)
        newBrush.set_color(i, this->get_color(i));
     return newBrush;
}

