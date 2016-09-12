/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on September 12, 2016, 9:45 AM
 * Purpose:  NASA Budget
 * Federal Spending $3.95T - 
 * http://federal-budget.insidegov.com/l/119/2016-Estimate Total Outlays
 * NASA Budget $19.3B -
 * http://www.planetary.org/blogs/casey-dreier/2015/1216-nasa-gets-an-extraordinary-budget-in-2016.html
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
    float NASBdgt=193e8f;
    float fedBdgt=3.95e12f;
    float pNASSpd;          //Percentage NASA spending
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    pNASSpd=NASBdgt/fedBdgt*PERCENT;
    
    //How to round to 2 decimal places
    int round=pNASSpd*100+0.5f; //Shift by 2 decimal places, *100 and round up
    pNASSpd=round/100.0f; //Integer truncated then shift back 2 decimal places
      
      
    //Output Located Here
    cout<<"The NASA Budget for 2016 = $"<<NASBdgt<<endl;
    cout<<"The Federal Budget for 2016 = $"<<fedBdgt<<endl;
    cout<<"The Percentage spent on NASA = "<<pNASSpd<<"%"<<endl;

    //Exit
    return 0;
}

