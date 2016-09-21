 /* 
   File:   main.cpp
   Author: Cody Steimle
   Created on September 18, 2016, 10:41 PM
   Purpose: To calculate coins and convert them to value in cents.
 */

//System Libraries
#include <iostream>  //Input/output objects
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    short quart,dimes,nickl,tcents;   //Number of Quarters, Number of Dimes, Number of Nickels, Total Cents
    
    //Input or initialize values Here
    cout<<"This program will convert coin amounts into a grand total of cents."<<endl;
    cout<<"Enter the number of quarters:"<<endl;
    cin>>quart;  //User sets the number of quarters
    cout<<"Enter the number of dimes:"<<endl;
    cin>>dimes;  //User sets the number of dimes
    cout<<"Enter the number of nickels:"<<endl;    
    cin>>nickl;  //User sets the number of nickels     
    
    //Process values -> Map inputs to outputs
    tcents=(quart*25)+(dimes*10)+(nickl*5); //Adds the total value of each coin together  
            
    //Display Output
    cout<<"The total amount of money is: "<<tcents<<" cents"<<endl;
    
    //Exit Program
    return 0;
}