/* 
   File:   main.cpp
   Author: Cody Steimle
   Created on November 08, 2016, 11:00 AM
   Purpose: Find the average and standard deviation of four scores
 */

//System Libraries
#include <iostream>  //Input/output objects
#include <cmath>     //Math library
using namespace std; //Namespace used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float fndAvrg(int &,int &,int &,int &);
float fndDev(int &,int &,int &,int &,float &);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    int scr1,scr2,scr3,scr4; //Scores 1-4
    float average,stdDev;    //Average and Standard Deviation
    char repeat;             //Repeats the program
    
    //Initialize
    cout<<"This program will take four scores and find the average along with "
            "the standard deviation."<<endl;
    
    do{
        //Set values
        do{
            cout<<"Please enter the first score (0-100):";
            cin>>scr1;
        }while(scr1<0||scr1>100);
        do{
            cout<<"Please enter the second score (0-100):";
            cin>>scr2;
        }while(scr2<0||scr2>100);
        do{
            cout<<"Please enter the third score (0-100):";
            cin>>scr3;
        }while(scr3<0||scr3>100);
        do{
            cout<<"Please enter the fourth score (0-100):";;
            cin>>scr4;
        }while(scr4<0||scr4>100);

        //Process values -> Map inputs to outputs
        average=fndAvrg(scr1,scr2,scr3,scr4);       //Sets the Average
        stdDev=fndDev(scr1,scr2,scr3,scr4,average); //Sets the Standard Deviation

        //Display Output
        cout<<"Average: "<<average<<endl;
        cout<<"Standard Deviation: "<<stdDev<<endl;
        
        //Repeat the Program
        cout<<"Would you like to run this program again? (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');
    
    //Exit Program
    return 0;
}

float fndAvrg(int &scr1,int &scr2,int &scr3,int &scr4){
    //Declare Variables
    int total=scr1+scr2+scr3+scr4;  //Totals the scores
    float average=total/4;          //Calculates average
    return average;
}

float fndDev(int &scr1,int &scr2,int &scr3,int &scr4,float &avrg){
    //Declare Variables
    float stdDev;
    //Find Standard Deviation
    stdDev=pow((scr1-avrg)*(scr1-avrg)+(scr2-avrg)*(scr2-avrg)
            +(scr3-avrg)*(scr3-avrg)+(scr4-avrg)*(scr4-avrg)/4,0.5);
    return stdDev;
}