#ifndef SETTINGS_H
#define SETTINGS_H

#include "generator.h"

class Settings
{
private:
    static Settings settingsInstance;
    Settings();

public:
    GeneratorInt generatorInt;
    void set_default();
    int alpha;
    int numberOfPolygonPoints;
    int numberOfPolygons;
    int widthHeight;
    double Pi;
    int minMutationPoints;
    int midMutationPoints;
    int minMutationBrush;
    int midMutationBrush;
    int maxMutationPoints;
    int algorithmNumber;
    static Settings *getInstance();
    int populationsize;
    int localBrushMutationRate;
    int globalBrushMutationRate;
    int localPointMutationRate;
    int globalPointMutationRate;
    int globalPolygonMutationRate;
    int autosave_test;  // ovo nam sluzi za autosave..
    int num_elites;
    //autosave varijable
    int roger_autosave;
    int genetic_autosave;
    int bees_autosave;
    int autosave_seconds;
    int convex;
};

#endif // SETTINGS_H
