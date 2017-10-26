#ifndef DRAWING
#define DRAWING

#include "polygon.h"
#include "settings.h"

class Drawing
{
    MyPolygon *polygons = NULL;
    bool isMutated = false;
    Settings *settings;
    int fitness;

public:
    Drawing();
    void mutate();
    void initialize();
    MyPolygon get_polygon(int index);
    MyPolygon* getPolygon(int index);
    void clone(Drawing *drawing);
    bool getIsMutated();
    void crossOver(Drawing *parent1, Drawing *parent2, int crossOverPoint);
    void setFitness(unsigned int value);
    unsigned int getFitness();
    ~Drawing();
};


#endif // DRAWING

