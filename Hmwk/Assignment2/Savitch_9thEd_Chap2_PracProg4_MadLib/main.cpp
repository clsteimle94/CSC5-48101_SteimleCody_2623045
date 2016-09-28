/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on September 27, 2016, 12:20 PM
 * Purpose:  User inputs/plays a game of Mad Lib.
 */

//System Libraries Here
#include <iostream>   //Input output objects
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    string prof, name, food, adjt, color, animal;   //Professor's name, your name, any food, any adjective, any color, any animal 
    short number;                                   //A number the user will pick between 100-120.
    
    //Input or initialize values Here
    cout<<"Let's play a game of Mad Lib!"<<endl;
    cout<<"What is your instructor's name?"<<endl;
    cin>>prof;
    cout<<"What is your name?"<<endl;
    cin>>name;
    cout<<"Name any food:"<<endl;
    cin>>food;
    cout<<"Give a number between 100 and 120:"<<endl;
    cin>>number;
    cout<<"Now pick an adjective:"<<endl;
    cin>>adjt;
    cout<<"Pick any color:"<<endl;
    cin>>color;
    cout<<"Finally name any animal:"<<endl;
    cin>>animal;
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"-------------------------"<<endl;
    cout<<"Dear Instructor "<<prof<<","<<endl;
    cout<<" "<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten "<<food;
    cout<<", which made me turn "<<color<<" and extremely ill. I came down with a fever of "<<number;
    cout<<". Next my "<<adjt<<" pet "<<animal<<" must have smelled the remains of the "<<food;
    cout<<" on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late."<<endl;
    cout<<" "<<endl;
    cout<<"Sincerely, "<<endl;
    cout<<name<<endl;
    
    //Exit
    return 0;
}
