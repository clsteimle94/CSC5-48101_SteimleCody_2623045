/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on October 10, 2016, 10:35 AM
 * Purpose:  Hello World Template
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
    int fracpA, fracpB, numshar, whldoll;
    float stkpric;
    
    //Input or initialize values Here
    cout<<"What is the number of shares owned of the stock?"<<endl;
    cin>>numshar;
    cout<<"What is the whole dollar amount of the price?"<<endl;
    cin>>whldoll;
    cout<<"What is the fractional portion of the stock (enter two numbers)"<<endl;
    cin>>fracpA>>fracpB;
            
    //Process/Calculations Here
    stkpric=whldoll/(numshar*fracpA/fracapB);
            
    //Output Located Here
    cout<<valueofholdings<<endl;

    //Exit
    return 0;
}

