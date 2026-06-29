//Calculate the sum of all odd numbers from 1 up to n
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number :- ";
    int n;
    cin>>n;

    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<"sum:- "<<sum;
return 0;
}
