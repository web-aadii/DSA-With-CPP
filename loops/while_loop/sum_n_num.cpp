//Calculate and print the sum of the first n natural numbers.

// code:-
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number:- ";
    int n;
    cin>>n;
    int i = 0;
    int sum = 0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"sum = "<<sum;
    return 0;
}