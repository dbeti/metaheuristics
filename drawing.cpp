#include "drawing.h"

Drawing::Drawing()
{
    settings = Settings::getInstance();
    polygons = new MyPolygon[settings->numberOfPolygons];
}
Drawing::~Drawing()
{
    delete[] polygons;
}

void Drawing::initialize()
{
    for(int i = 0; i < settings->numberOfPolygons; ++i)
        polygons[i].initialize();
}

void Drawing::mutate()
{
    isMutated = false;
    for(int i = 0; i < settings->numberOfPolygons; ++i)
        polygons[i].mutate(&isMutated);
}

bool Drawing::getIsMutated()
{
    return isMutated;
}

MyPolygon Drawing::get_polygon(int index)
{
    return polygons[index];
}

void Drawing::clone(Drawing *drawing)
{

     for(int i = 0; i < settings->numberOfPolygons; ++i)
     {
        for(int j = 0; j < settings->numberOfPolygonPoints; ++j)
        {
            int coordinateX = drawing->getPolygon(i)->get_point(j).getCoordinate(0);
            int coordinateY = drawing->getPolygon(i)->get_point(j).getCoordinate(1);
            polygons[i].set_point(j, coordinateX, coordinateY);

        }
        polygons[i].setBrush(drawing->getPolygon(i)->getBrush().get_color(0),drawing->getPolygon(i)->getBrush().get_color(1),
                             drawing->getPolygon(i)->getBrush().get_color(2));
     }

     fitness = drawing->getFitness();

}

MyPolygon *Drawing::getPolygon(int index)
{
    return &polygons[index];
}

void Drawing::crossOver(Drawing *parent1, Drawing *parent2, int crossOverPoint)
{
    for(int i = 0; i < settings->numberOfPolygons; ++i)
    {
        if(i < crossOverPoint)
        {
           polygons[i].clone(parent1->getPolygon(i));
        }
        else
        {
           polygons[i].clone(parent2->getPolygon(i));
        }
    }
}

void Drawing::setFitness(unsigned int value)
{
    fitness = value;
}

unsigned int Drawing::getFitness()
{
    return fitness;
}
