#include<iostream>
using namespace std;
int main(){
    float sgpa, percentage;
    cout<<"enter sgpa: ";
    cin>>sgpa;
    percentage = (sgpa * 10) - 7.5;
    cout<< percentage << endl << sgpa << " * " << 10 << " - " << 7.5 << " = " <<percentage;
}
