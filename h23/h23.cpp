/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h14.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "sgilbert"; //"WHO AM I?"; // Add your Canvas/occ-email ID


#include "h23.h"

// Add your code here
int alternatingSum(const int a[], size_t size)
{
    int sum = 0;
    for (size_t i = 0; i < size; i++)
        if (i % 2 == 0)
            sum += a[i];
        else
            sum -= a[i];

    return sum;
}


MinMax minMax(const double *ptr, size_t size)
{
    MinMax result;
    if (size > 0)
    {
        const double *aEnd = ptr + size;
        result.min = result.max = ptr;
        while (++ptr != aEnd)
        {
            if (*ptr > *result.max) result.max = ptr;
            if (*ptr < *result.min) result.min = ptr;
        }
    }
    return result;
}


/////////////// STUDENT TESTING ////////////////////

int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}