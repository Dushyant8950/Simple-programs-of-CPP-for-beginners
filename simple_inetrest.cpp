#include<iostream>
using namespace std;
int main(){
    float principal, rate, time, simple_interest;
    cout<<"enter principal:";
    cin>>principal;
    cout<<"enter rate:";
    cin>>rate;
    cout<<"enter time:";
    cin>>time;
    simple_interest = principal * rate * time / 100;
    cout<<simple_interest;
}