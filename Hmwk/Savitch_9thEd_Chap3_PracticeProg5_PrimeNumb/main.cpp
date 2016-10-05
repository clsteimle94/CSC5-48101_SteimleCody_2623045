/* 
   File:   main
   Author: Cody Steimle
   Created on October 4, 2016, 10:48 AM
   Purpose:  To find and print all of the prime numbers 3-100
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
    int numb;
    
    //Process values -> Map inputs to Outputs
    numb=3;
    while (numb<=100)
    {               
        if (numb/(2)==1){    
        numb=numb+1;  
        }
        else { cout<<numb<<endl; 
        numb=numb+1;
        }
    }
    //Display Output  
    
    //Exit Program
    return 0;
}