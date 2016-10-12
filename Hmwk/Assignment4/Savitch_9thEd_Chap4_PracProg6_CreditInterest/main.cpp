/* 
   File:   main
   Author: Cody Steimle
   Created on October 11, 2016, 2:15 PM
   Purpose:  Calculate new credit balance after compounding interest
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
    char ans;               //answer for looping
    int months;             //number of months compounded
    float monrate, balance; //monthly interest rate, initial balance
    
    //Looping
    do{
   
    //Input values 
    cout<<"This program will take your initial credit balance and compound monthly interest."<<endl;
    cout<<"Initial balance?"<<endl;
    cin>>balance; 
    cout<<"How many months?"<<endl;
    cin>>months;
    cout<<"Monthly rate?"<<endl;
    cin>>monrate;
    
    //Process values -> Map inputs to Outputs
    monrate=monrate/100; //converts percent to decimal
    do {
        balance=balance*monrate+balance; //compounds the balance
        months--;
    } while (months!=0);  //while months hit 0 stop the loop
    
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);  
           
    //Output
    cout<<"The new due balance after compound interest is: $"<<balance<<endl;   
                
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>ans;
    }while((ans=='y')||(ans=='Y'));
        
    //Exit Program
    return 0;
}