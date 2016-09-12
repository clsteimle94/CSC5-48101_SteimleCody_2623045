/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on September 12, 2016, 8:55 AM
 * Purpose:  Military Budget
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const unsigned char PERCENT=100; //Conversion to percentage
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float milBdgt=585e9f;
    float fedBdgt=3.999e12f;
    float pMilSpd;          //Percentage Military spending
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    pMilSpd=milBdgt/fedBdgt*PERCENT;
    
    //How to round to 2 decimal places
    int round=pMilSpd*100+0.5f; //Shift by 2 decimal places, *100 and round up
    pMilSpd=round/100.0f; //Integer truncated then shift back 2 decimal places
      
      
    //Output Located Here
    cout<<"The Military Budget for 2016 = $"<<milBdgt<<endl;
    cout<<"The Federal Budget for 2016 = $"<<fedBdgt<<endl;
    cout<<"The Percentage spent on the Military = "<<pMilSpd<<"%"<<endl;

    //Exit
    return 0;
}

