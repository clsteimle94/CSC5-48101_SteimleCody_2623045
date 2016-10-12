/* 
   File:   main
   Author: Cody Steimle
   Created on October 11, 2016, 12:20 PM
   Purpose:  Calculate inflation rate using the cost of a large drink.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char ans;                                 //answer for looping
    float pricnow, pricago, infrate, annicrs; //Price today, Price 1 year ago, Inflation rate, Annual increase
    
    //Looping
    do{
    
    //Input values
    cout<<"Please enter the price of a large drink today:"<<endl;
    cin>>pricnow;
    cout<<"Please enter the price of a large drink a year ago:"<<endl;
    cin>>pricago;
    
    //Input/Process values 
    if(pricnow<=0||pricago<=0){
        cout<<"Enter a postive number."<<endl;
        return 1;//Return failure
        }
    else
    
    //Process values -> Display Output
    infrate=(pricnow-pricago)/pricago*100;
    annicrs=infrate*pricnow/100;
    
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);    
    
    cout<<"Inflation rate: "<<infrate<<"%"<<endl;
    cout<<"In a year the cost of a large drink will be:  $"<<annicrs+pricnow<<endl;
    cout<<"In 2 years the cost of a large drink will be: $"<<annicrs*2+pricnow<<endl;
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>ans;
    }while((ans=='y')||(ans=='Y'));

    //Exit Program
    return 0;
}