/* 
   File:   main
   Author: Cody Steimle
   Created on November 7th, 2016, 11:00 AM
   Purpose:  Calculate how a population increases or decreases over years
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int popultn(int,float,float); //Calculates the population

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int pop,death,birth,years; //population, deaths/births per year, years
    float bRate,dRate;         //birth rate, death rate
    
    //Input values
    cout<<"This program calculates the population over time"<<endl;
    cout<<"What is the population?"<<endl;
    cin>>pop;
    cout<<"Birth Rate per year?"<<endl;
    cin>>birth;
    cout<<"Death Rate per year?"<<endl;
    cin>>death;
    cout<<"How many years to predict?"<<endl;
    cin>>years;
    
    //Process values -> Map inputs to Outputs
    bRate=1.0f*birth/pop;  //Calculates birth rate
    dRate=1.0f*death/pop;  //Calculates death rate
    for(int year=1;year<=years;year++){
        pop=popultn(pop,dRate,bRate);
        cout<<"Year "<<year<<" = population of "<<pop<<endl;
    }
    
    //Exit Program
    return 0;
}
 
//Calculates the population
int popultn(int pop,float death,float birth){
    return pop*(1+birth-death);
}