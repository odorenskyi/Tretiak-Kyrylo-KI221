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
    7, //7.28319,
    9 , //8.69547,
    13 , //12.9323,
    459 , //459.207,
    67  //66.5463
    };
    cout<<"|INPUT|"<<setw(12)<<"|OUTPUT|"<<setw(10)<<"|"<<"STATUS"<<"|"<<endl;
    for (int i = 0; i < 5; i++){
        float res = s_calculation(input_x[i], input_y[i], input_z[i]);
        int result = round(res);
        if (result == output[i]){
            cout << res << setw(10) << result << setw(17) <<"Passed" <<endl;
        }
        else{
            cout << res << setw(10) << result<< setw(17) <<"Failed" << endl ;
        }
    }
    return 0;
}
