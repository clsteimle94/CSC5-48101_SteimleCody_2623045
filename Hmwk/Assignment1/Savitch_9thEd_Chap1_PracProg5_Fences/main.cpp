/*
 File:   main.cpp
   Author: Cody Steimle
   Created on September 19, 2016, 11:42 PM
   Purpose: Calculating the amount of fencing needed for an enclosed area 
 */

//System Libraries
#include <iostream>  //Input/output objects
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main( )
{
    //Declaration of Variables
	int width, height, tLength; //width, height, total length
	
	//Set values
        cout<<"This program will calculate the fencing required in a rectangular area.\n";
	cout << "Press return after entering a number.\n";
	cout << "Enter the width in feet:\n";
	cin >> width;  //User inputs the width
	cout << "Enter the height in feet:\n";
	cin >> height;  //User inputs the height
	
	//Process values -> Map inputs to outputs
	tLength = width * height;  //Area formula (length*width)
	
	//Display Output
	cout << "If the width of a enclosed rectangle is: " << width << "ft\n";
	cout << "and the height of a enclosed rectangle is: " << height << "ft\n";
	cout << "then total length of fencing needed is: " << tLength << "ft\n";
	
	//Exit Program
	return 0;
}