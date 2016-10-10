/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on October 10, 2016, 10:25 AM
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
    int milesA, milesB, ltrgasA, ltrgasB;
    float galgasA, galgasB, mpgA, mpgB;
    
    //Input or initialize values Here
    cout<<"This program will calculate each of two car's Miles Per Gallon (MPG)."<<endl;
    cout<<"Please input the liters of gas used followed by the miles traveled for the first car:"<<endl;
    cin>>ltrgasA>>milesA;
    cout<<"Please input the liters of gas used followed by the miles traveled for the second car:"<<endl;
    cin>>ltrgasB>>milesB;
    
    //Process/Calculations Here
    galgasA=ltrgasA*LTRGAL;
    mpgA=milesA/galgasA;     
    galgasB=ltrgasB*LTRGAL;
    mpgB=milesB/galgasB;     
    
    //Output Located Here
    cout<<"The first car traveled "<<mpgA<<" miles per gallon of gas."<<endl;
    cout<<"The second car traveled "<<mpgB<<" miles per gallon of gas."<<endl;
    //Exit
    return 0;
}

