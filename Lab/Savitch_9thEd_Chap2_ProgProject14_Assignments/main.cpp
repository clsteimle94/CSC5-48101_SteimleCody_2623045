/* 
   File:   main
   Author: Cody Steimle
   Created on September 27, 2016, 4:49 PM
   Purpose:  
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
    int amtWork, scrOne, ttlOne;
    
    //Input values
    cout<<"How many assignments are there?"<<endl;
    cin>>amtWork;
         
    
    //Process values -> Map inputs to Outputs
    do
    {
        cout<<"Score received for assignment 1:"<<endl;
        cin>>scrOne;
        cout<<"Total point possible for assignment:"<<endl;
        cin>>ttlOne;
     
      
        amtWork--;   
    } while (amtWork > 0);
 
    //Display Output

    //Exit Program
    return 0;
}