//WAP to check wherther the person is eligible for voting or not

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your age:- ";
    int n;
    cin>>n;
    if(n>18){
        cout<<"congratulations, you are eligible for votting .";
    }
    else{
        cout<<"sorry, you are not eligible for voting.";
    }
    return 0;
}