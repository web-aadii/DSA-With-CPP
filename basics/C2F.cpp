// WAP that Convert Celsius to Fahrenheit.
// Approch:- first we will take inputas celsius after taking input as celsis we will using celsius to fahrenheit conversion formula then simply print o/p

#include<iostream>
using namespace std;
int main(){
    
    cout<<"Enter temperature in celsius :- " << endl;
    float c;
    cin>> c;

    float f;
    f = (c * 9/5) + 32;
    cout<<"Fahrenheit temp of entered celsius value is :- "<< f << endl ;

    return 0;
}