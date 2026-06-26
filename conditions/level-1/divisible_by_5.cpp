//WAP that checks whether the given number is divisible 5 or not

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number:- ";
    int n;
    cin >> n;
    if(n%5==0){
        cout<<"Entered number is divisible by 5";
    }
    else{
        cout<<"Entered number is not divisible by 5";
    }
    return 0;
}