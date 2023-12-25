#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string name, division;
    int roll, sub1, sub2, sub3, sum;
    float per;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your roll: ";
    cin>>roll;
    cout<<"Enter marks of three subject: ";
    cin>>sub1>>sub2>>sub3;
    sum = sub1+sub2+sub3;
    per= sum/3;
    if(per>=80){
        division="first";
    }else if(per>=70 && per<80){
        division= "second";
    }else{
        division="third";
    }
    cout << fixed << setprecision(2); // Set precision to 2 decimal places
    cout<<"Name: "<<name<<endl<<"Roll: "<<roll<<endl<<"Total: "<<sum<<endl<<"Percentage: "<<per<<endl<<"Division: "<<division;
}







