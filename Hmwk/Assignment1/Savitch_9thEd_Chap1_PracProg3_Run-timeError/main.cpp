/*
 File:   main.cpp
   Author: Cody Steimle
   Created on September 11, 2016, 10:28 PM
   Purpose: Showing an example of a run-time error by dividing by 0.
 */

//System Libraries
#include <iostream> //Input/output objects
using namespace std; //Namespace used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main( )
{
    //Declaration of Variables
	int numpods, pperpod, ttlpeas; //number of pods, peas per pod, total peas
	
        //Greeting
        cout << "Hello.\n";
        
	//Set values
	cout << "Press return after entering a number.\n";
	cout << "Enter the number of pods:\n";
	cin >> numpods;
	cout << "Enter the number of peas in a pod:\n";
	cin >> pperpod;
	
	//Process values -> Map inputs to outputs
	ttlpeas = numpods / pperpod; //Divide by 0 to get a run-time error.
	
	//Display Output
	cout << "if you have ";
	cout << numpods;
	cout << " pea pods\n";
	cout << "and ";
	cout << pperpod;
	cout << " peas in each pod, then\n";
	cout << "you have ";
	cout << ttlpeas;
	cout << " peas in all the pods.\n";
        
        //Farewell
        cout << "Good-bye.\n";
	
	//Exit Program
	return 0;
}