/* 
   File:   main
   Author: Cody Steimle
   Created on September 20th, 11:25 AM
   Purpose:  Iteration to find Square Root
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format Library
#include <cmath>      //Square Root Function
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float MAXRAND=pow(2,31)-1;//Max signed positive value for int

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    float n,guess,r;
    float scale=90,shift=10;
    short counter=0;
    
    //Input values - float random number (10,100) vs.
    cout<<"Pick a number to find the square root of:"<<endl;
    cin>>n;
    guess=n/2;
    
    //Display the Initialization
    cout<<"The number to find the square root of = "<<n<<endl;
    cout<<"The initial guess = "<<guess<<endl;
    
    //First Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"Pass "<<counter<<"  [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
        
    //Second Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"Pass "<<counter<<"  [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"Pass "<<counter<<"  [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"Pass "<<counter<<"  [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;

    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"Pass "<<counter<<"  [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"Pass "<<counter<<"  [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"Pass "<<counter<<"  [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //The answer or solution is
    cout<<"The square root of ("<<n<<")="<<sqrt(n)<<endl;

    //Exit Program
    return 0;
}