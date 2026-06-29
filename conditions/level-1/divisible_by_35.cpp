// WAP that checks entered number is divisible 3 and 5 or not

#include<iostream>
using namespace std;
int  main(){
    cout<<"Enter number :- ";
    int n;
    cin>>n;
    if(( n % 3==0) && ( n % 7==0)){
        cout<<"Entered number is divisible by both 3 and 5";
    }
    else{
        cout<<"Entered number is not divisible by both 3 and 5";
    }
    return 0;

}