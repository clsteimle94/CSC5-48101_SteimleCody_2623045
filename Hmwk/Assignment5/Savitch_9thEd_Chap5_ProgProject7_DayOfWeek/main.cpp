/* 
   File:   main
   Author: Cody Steimle
   Created on November 8th, 2016, 3:45 PM
   Purpose:  Calculate the day of the week.
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>    //exit return
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
bool isLpYr(int);  //Is it a leap year
int  getCVal(int); //Get the century value
int  getYVal(int); //Get the year value
int  getMVal(int,int);//Get the month value
void getInpt(int &,int &, int&); //Get Input
string dayOfWk(int,int,int);//Return day of week

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int day,month,year;
    char repeat;  //Repeats the program
    
    //Initialize
    cout<<"This program finds the day of the week for a given date."<<endl;
    
    //Process values -> Map inputs to Outputs
    do{
        getInpt(day,month,year);
        cout<<"Day of week = "<<dayOfWk(month,day,year)<<endl;
        cout<<"Would you like to runs this program again? (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');    
        
    //Exit Program
    return 0;
}

string dayOfWk(int m,int d,int y){
    int nDay=(d+getMVal(m,y)+getYVal(y)+getCVal(y))%7;
    switch(nDay){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
        case 6:return "Saturday";
        default:return "Bad Day";
    }
}

int  getMVal(int m,int y){
    switch(m){
        case 1:return isLpYr(y)?6:0;
        case 2:return isLpYr(y)?2:3;
        case 3:case 11:return 3;
        case 4:case  7:return 6;
        case 9:case 12:return 5;
        case 5:return 1;
        case 6:return 4;
        case 8:return 2;
        case 10:return 0;
        default:cout<<"Bad number"<<endl;exit(1);
    }
}

int getYVal(int year){
    int dig2=year%100;
    return dig2+dig2/4;
}

int getCVal(int year){
    return 2*(3-(year/100)%4);
}

bool isLpYr(int year){
    return ((year%400==0)||((year%4==0)&&(year%100!=0)));
}

void getInpt(int &day,int &month, int &year){
    do{
        cout<<"What is the year? (1500-3000)"<<endl;
        cin>>year;
    }while(year>3000||year<1500);
    do{
        cout<<"What is the month? (1-12)"<<endl;
        cin>>month;
    }while(month>12||month<1);
    do{    
        cout<<"What is the day? (1-31)"<<endl;
        cin>>day;
    }while(day>31||day<1);
}