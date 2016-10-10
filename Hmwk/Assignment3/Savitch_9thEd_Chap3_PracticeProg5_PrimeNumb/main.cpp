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
    
    //Process values -> Display
    numb=3;
    while (numb<=9){
        if (numb%2==0){    
            numb++;  
	}
        else {
            cout<<numb<<endl; 
            numb++;
        }
    }
    while (numb<=100){               
        if (numb%2==0 || numb%3==0 || numb%5==0 || numb%7==0 || numb%9==0){    
            numb++;  
	}
        else{
            cout<<numb<<endl; 
            numb++;
        }
    }
    cout<<"These are the prime numbers from 3 to 100."<<endl;
    
    //Exit Program
    return 0;
}