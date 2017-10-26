#include "settings.h"

Settings Settings::settingsInstance;

Settings::Settings()
{
    alpha = 128;
    numberOfPolygonPoints = 3;
    numberOfPolygons = 50;
    widthHeight = 200;
    Pi =  3.1415926535897;
    minMutationPoints = 5;
    midMutationPoints = 30;
    minMutationBrush = 5;
    midMutationBrush = 20;
    maxMutationPoints = 100;
    algorithmNumber = 2;
    populationsize = 4;
    localBrushMutationRate = 1500;
    globalBrushMutationRate = 1500;
    localPointMutationRate = 1000;
    globalPointMutationRate = 1000;
    globalPolygonMutationRate = 1500;
    autosave_test = 0;
    num_elites = 2;

    autosave_seconds = 60*30;
    //
    convex = 0;
}

void Settings::set_default()
{
    alpha = 128;
    numberOfPolygonPoints = 3;
    numberOfPolygons = 50;
    widthHeight = 200;
    Pi =  3.1415926535897;
    minMutationPoints = 5;
    midMutationPoints = 30;
    minMutationBrush = 5;
    midMutationBrush = 20;
    maxMutationPoints = 100;
    algorithmNumber = 2;
    populationsize = 4;
    localBrushMutationRate = 1500;
    globalBrushMutationRate = 1500;
    localPointMutationRate = 1000;
    globalPointMutationRate = 1000;
    globalPolygonMutationRate = 1500;
    num_elites = 2;

    //
    convex = 0;
}


Settings* Settings::getInstance()
{
    return &settingsInstance;
}
