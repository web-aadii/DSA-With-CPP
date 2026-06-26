// WAP to swap two number using 3rd variable

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 1st number : ";
    int a;
    cin>> a;
    cout<<"Enter 2nd number : ";
    int b;
    cin>> b;
    int temp;
 
    temp = a;
    a=b;
    b=temp;
    cout<< "After swaping :- "<< a << "   " << temp;
    return 0;
}