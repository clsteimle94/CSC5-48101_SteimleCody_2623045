/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on October 10, 2016, 10:25 AM
 * Purpose:  To calculate the MPG of many cars.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
float LTRGAL=2.64179e-1f; //Conversion from liter to gallon

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int miles, ltrgas, carnum, count; //Miles traveled, liters of gas, number of cars, counter
    float galgas, mpg;                //gallons of gas, miles per hour
    
    //Input or initialize values Here
    cout<<"This program will calculate multiple car's Miles Per Gallon (MPG)."<<endl;
    cout<<"Please input the number of cars:"<<endl;
    cin>>carnum;
    
    //Input Validation
    if(carnum<=0){
        cout<<"Please choose a number larger than 0."<<endl;
        return 1;//Return failure
    }
    else    
     
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);    
        
    //Process/Output
    count=1;
    do {
        cout<<"Please input the liters of gas used followed by the miles traveled for car "<<count<<":"<<endl;
        cin>>ltrgas>>miles;
        galgas=ltrgas*LTRGAL;
        mpg=miles/galgas;   
        cout<<"This car traveled "<<mpg<<" miles per gallon of gas."<<endl;
        count++;
        carnum--;
       }
    while (carnum!=0);
    
  
    //Exit
    return 0;
}

