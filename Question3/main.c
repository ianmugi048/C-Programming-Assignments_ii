#include <stdio.h>
#include <stdlib.h>

double get_e_power_x(int terms, double x)
{
    double result=1.0;
    double factorial=1.0;
    double numerator=1.0;

    for( int n=1;n<terms;n++)
    {
        factorial*=n;
        numerator*=x;
        result+=numerator/factorial;

    }
    return result;
}

