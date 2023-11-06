#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"enter a=";
    cin>>a;
    cout<<"enter b=";
    cin>>b;
    //AND Operator - &&
    //true AND false = false
    //false AND true = false
    //false AND false = false 
    //true AND true = true
    cout << (a>b && a!=b)<<endl;
    cout << (a<b && a!=b)<<endl;
    //OR Operator - ||
    //true OR false = true
    //false OR true = true 
    //true OR true = true
    //false OR false = false
    cout << (a>b || a!=b)<<endl;
    cout << (a<b || a!=b)<<endl;
    //NOT Operator - !
    //return true if result is false and vice versa 
    cout << !(a>b && a!=b)<<endl;
}