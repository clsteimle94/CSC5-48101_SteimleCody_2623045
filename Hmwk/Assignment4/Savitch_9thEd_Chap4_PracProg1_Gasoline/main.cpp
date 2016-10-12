/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on October 10, 2016, 10:00 AM
 * Purpose:  To calculate the MPG of a car.
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
    char ans;           //answer for looping
    int miles, ltrgas;  //Miles traveled, liters of gas
    float galgas, mpg;  //gallons of gas, miles per hour
    
    //Looping
    do{

    //Input or initialize values Here
    cout<<"This program will calculate your car's Miles Per Gallon (MPG)."<<endl;
    cout<<"Please input the liters of gas used:"<<endl;
    cin>>ltrgas;
    cout<<"Please input the miles traveled:"<<endl;
    cin>>miles;

    //Input validation
    if(ltrgas<0||miles<0){
        cout<<"Can't calculate negative numbers"<<endl;
        return 1;//Return failure
        }
    else

    //Process/Calculations Here
    galgas=ltrgas*LTRGAL;
    mpg=miles/galgas;     

    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    //Output Located Here
    cout<<"The car traveled "<<mpg<<" miles per gallon of gas."<<endl;
        
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>ans;
    }while((ans=='y')||(ans=='Y'));
    
        //Exit
        return 0;
    }

