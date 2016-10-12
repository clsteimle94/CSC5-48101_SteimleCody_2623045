/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on October 10, 2016, 10:25 AM
 * Purpose:  To calculate the better MPG of 2 cars.
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
    char ans;                          //answer for looping
    int miles, ltrgas;                 //Miles traveled, liters of gas
    float galgas, mpg, carone, cartwo; //gallons of gas, miles per hour, first car, second car
             
    //Looping
    do{
    
    //Input/Process values 
     cout<<"This program will compare 2 car's MPG to find the superior one."<<endl; 
    cout<<"Please input the liters of gas used followed by the miles traveled for car 1:"<<endl;
    cin>>ltrgas>>miles;
    galgas=ltrgas*LTRGAL;
    mpg=miles/galgas;
    carone=mpg;
                
    //Input/Process values 
    cout<<"Please input the liters of gas used followed by the miles traveled for car 2:"<<endl;
    cin>>ltrgas>>miles;
    galgas=ltrgas*LTRGAL;
    mpg=miles/galgas;
    cartwo=mpg;
     
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);   
    
    //Display Output
    if (carone>cartwo){
    cout<<"Car 1 is superior with "<<carone<<" MPG"<<endl;
    cout<<"Car 2 is inferior with "<<cartwo<<" MPG"<<endl;
    }else if (carone<cartwo){
    cout<<"Car 2 is superior with "<<cartwo<<" MPG"<<endl;
    cout<<"Car 1 is inferior with "<<carone<<" MPG"<<endl;
    }else if (carone=cartwo){
    cout<<"Car 1 is the same: "<<cartwo<<" MPG"<<endl;
    cout<<"Car 2 is the same: "<<carone<<" MPG"<<endl;
    }
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>ans;
    }while((ans=='y')||(ans=='Y'));
    
    //Exit
    return 0;
}

