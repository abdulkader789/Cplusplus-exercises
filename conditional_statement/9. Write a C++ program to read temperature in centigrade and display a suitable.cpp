#include<iostream>
using namespace std;
int main()
{
    int temp;
    string mes;
    cout<<"Enter temperature: ";
    cin>>temp;
    if(temp<0){
        mes="Freezing";
    }else if(temp>=0 && temp<=10){
        mes="Very cold";
    }else if(temp>=10 && temp<=20){
        mes="Very cold";
    }else if(temp>=20 && temp<=30){
        mes="normal";
    }else{
        mes="hot"
    }
    cout<<"Weather is: "<<mes;
}
