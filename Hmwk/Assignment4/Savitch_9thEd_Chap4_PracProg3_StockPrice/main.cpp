/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on October 10, 2016, 10:35 AM
 * Purpose:  Calculate total value of a person's stock
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char ans;                    //answer for looping
    int numshar, stkpric;        //Number of shares, Stock price
    float fracA, fracB, ttlpric; //Numerator of portion, denominator of portion, total price
    
    //Looping
    do{
    
    //Input or initialize values Here
    cout<<"This program will determine the total value of your stock."<<endl;
    cout<<"What is the number of shares owned of the stock?"<<endl;
    cin>>numshar;
    cout<<"What is the whole dollar amount of the stock?"<<endl;
    cin>>stkpric;
    cout<<"What is the fractional portion of the stock? (enter two numbers):"<<endl;
    cin>>fracA>>fracB;
            
    //Input/Process values 
    if(numshar<0||stkpric<=0||fracB<=0||fracA<=0){
        cout<<"Invalid input"<<endl;
        return 1;//Return failure
        }
    else 
    
    //Process/Calculations Here
    ttlpric=stkpric*(numshar*fracA/fracB);
            
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);    
    
    //Output Located Here
    cout<<"Your total value for the stock is: $"<<ttlpric<<endl;
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>ans;
    }while((ans=='y')||(ans=='Y'));

    //Exit
    return 0;
}

