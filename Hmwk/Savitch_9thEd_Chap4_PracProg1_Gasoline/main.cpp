/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on October 10, 2016, 10:00 AM
 * Purpose:  Hello World Template
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
    int miles, ltrgas;
    float galgas, mpg;
    
    //Input or initialize values Here
    cout<<"This program will calculate your car's Miles Per Gallon (MPG)."<<endl;
    cout<<"Please input the liters of gas used followed by the miles traveled:"<<endl;
    cin>>ltrgas>>miles;
    
    //Process/Calculations Here
    galgas=ltrgas*LTRGAL;
    mpg=miles/galgas;     
    
    //Output Located Here
    cout<<"The car traveled "<<mpg<<" miles per gallon of gas."<<endl;

    //Exit
    return 0;
}

