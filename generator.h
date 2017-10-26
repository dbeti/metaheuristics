#ifndef GENERATOR
#define GENERATOR

#include<random>
#include<ctime>


using namespace std;
class GeneratorInt
{
    uniform_int_distribution<int> distribution;
    mt19937 engine;

public:
    GeneratorInt();
    void set_bounds(int boundA, int boundB);
    int get(int boundA, int boundB);
};

class GeneratorDouble
{
    uniform_real_distribution<double> distribution;
    mt19937 engine;

public:
    GeneratorDouble();
    void set_bounds(double boundA, double boundB);
    double get(double boundA, double boundB);
};

#endif // GENERATOR

