#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter value of x:";
    cin>>x;
    cout<<"enter value of y:";
    cin>>y;
    cout<<x % y;
} 

//PROPERTIES:
//(1). IF (a < b) SO, a % b = a (a, b > 0)
//(2). IF a is positive BUT b is negative [a % (-b)] = a % b
//(3). IF a is negative BUT b is positive [(-a) % b] = -(a % b)
//(4). IF a is negative ALSO b is negative [(-a) % (-b)] = -(a % b)