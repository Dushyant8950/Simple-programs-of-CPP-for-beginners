#include<iostream>
using namespace std;
int main(){
    float physics, chemistry, math, hindi, english;
    cout<<"enter marks of physics:";
    cin>>physics;
    cout<<"enter marks pf chemistry:";
    cin>>chemistry;
    cout<<"enter marks of math:";
    cin>>math;
    cout<<"enter marks of hindi:";
    cin>>hindi;
    cout<<"enter marks of english:";
    cin>>english;
    float percentage = (physics + chemistry + math + hindi + english) / 5;
    cout<<percentage;
}