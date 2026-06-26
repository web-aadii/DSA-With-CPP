// WAP to check entered number is even or odd


#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number:- " ;
    int n;
    cin>> n;
    if(n%2==0){
        cout<<"Emtered value is even .";

    }
    else{
        cout<<"Entered calue is odd .";
    }
    return 0;
}