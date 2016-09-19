/* 
  File:   main.cpp
  Author: Cody Steimle
  Created on September 7, 2016, 9:57 AM
 * Purpose: To display a emulated "C" using characters.
 */

//System Libraries
#include <iostream>
using namespace std; //Name-Space used in the system library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char s=' ';//The space character
    char c;    //Character used to create the Big C
    
   //Input values
    cout<<"What character would you like to use to make a Big C, input\n";
    cin>>c;
    
   //Process values -> Map inputs to Outputs
    
   //Display Output
   cout<<s<<s<<c<<c<<c<<endl;
   cout<<s<<c<<s<<s<<c<<endl;
   cout<<c<<s<<s<<s<<s<<endl;
   cout<<c<<s<<s<<s<<s<<endl;
   cout<<c<<s<<s<<s<<s<<endl;
   cout<<c<<s<<s<<s<<s<<endl;
   cout<<c<<s<<s<<s<<s<<endl;
   cout<<c<<s<<s<<s<<s<<endl;
   cout<<s<<c<<s<<s<<c<<endl;
   cout<<s<<s<<c<<c<<c<<endl;
    
   //Exit Program
    return 0;
}

