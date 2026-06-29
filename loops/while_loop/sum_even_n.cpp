//Calculate the sum of all even numbers from 1 up to n.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number:- ";
    int n;
    cin>>n;
    int i=0;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<"Sum = "<<sum;
    return 0;
}