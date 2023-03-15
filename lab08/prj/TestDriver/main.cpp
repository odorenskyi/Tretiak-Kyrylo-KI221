#include <iostream>
#include "ModulesTretiak.h"
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float input_x[5] = {1,1,1,3,-2};
    float input_y[5] = {1,1,1,1,4};
    float input_z[5] = {1,0,3,0,5};
    float output[5] = {
    7.28319,
    8.69547,
    12.9323,
    459.207,
    66.5463
    };
    cout<<"|INPUT|"<<setw(12)<<"|OUTPUT|"<<setw(10)<<"|"<<"STATUS"<<"|"<<endl;
     for (int i = 0; i < 5; i++)
    {
        if (s_calculation(input_x[i], input_y[i], input_z[i]) != output[i])
        { cout << s_calculation(input_x[i], input_y[i], input_z[i]) << setw(15) << output[i] << setw(15) << "passed" << endl; }
        else
        { cout << s_calculation(input_x[i], input_y[i], input_z[i]) << setw(15) << output[i] << setw(15) << "failed" << endl; }
    }
    return 0;
}
