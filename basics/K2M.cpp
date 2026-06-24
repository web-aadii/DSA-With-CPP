//Convert Kilometer to Meter.
// here we first take inpuut as KM and then put it in a formula and bsed on that formula we will get an output

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter kiloimeter :- ";
    float km;
    cin>>km;

    float m;
    m = 1000*km;

    cout<<"meter conversion of entered kilometrer value is :- "<< m ;
    return 0;
}