/* 
   File:   main
   Author: Cody Steimle
   Created on October 11th, 2016, 5:25 PM
   Purpose:  Chose how many bottles of beer are on the wall
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
    char ans;           //answer for looping
    int bttlcnt;  //bottle count
    
    //Looping
    do{
   
    //Input values
    cout<<"Enter how many bottles of beer are on the wall:"<<endl;
    cin>>bttlcnt;
    
        //Input validation
    if(bttlcnt<=0||bttlcnt>99){
        cout<<"Choose a number between 1-99."<<endl;
        return 1;//Return failure
        }
    else
    
    //Process values -> Display Output
    do{ cout<<bttlcnt<<" bottles of beer on the wall, "<<endl;
        cout<<bttlcnt<<" bottles of beer."<<endl;
        cout<<"Take one down and pass it around, "<<endl;
        bttlcnt--; 
        cout<<bttlcnt<<" bottles of beer on the wall."<<endl;
        cout<<endl;
      }
    while(bttlcnt>0);  //Stop when no bottles remain
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>ans;
    }while((ans=='y')||(ans=='Y'));

    //Exit Program
    return 0;
}