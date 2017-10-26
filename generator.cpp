#include "generator.h"

GeneratorInt::GeneratorInt()
{
    engine.seed(time(0));
}

void GeneratorInt::set_bounds(int boundA, int boundB)
{
    distribution.param(uniform_int_distribution<int>::param_type(boundA, boundB));
}

int GeneratorInt::get(int boundA, int boundB)
{
    set_bounds(boundA, boundB);
    return distribution(engine);
}

GeneratorDouble::GeneratorDouble()
{
    engine.seed(time(0));
}

void GeneratorDouble::set_bounds(double boundA, double boundB)
{
    distribution.param(uniform_real_distribution<double>::param_type(boundA, boundB));
}

double GeneratorDouble::get(double boundA, double boundB)
{
    set_bounds(boundA,boundB);
    return distribution(engine);
}

