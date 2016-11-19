/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on November 18, 2016, 10:15 AM
 * Purpose:  A menu for Assignment 6
 */

//System Libraries Here
#include <iostream>  //Imput and Output
#include <cstdlib>   //Random
#include <ctime>     //Time
#include <vector>    //Vector
#include <fstream>   //I/O
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int ROWS=22;//Number of Rows
const int COLS=80;//Number of columns

//Function Prototypes Here
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
string findNme(string, string [], string [],int);
void fillAry(int [],int);  //Fills the array
bool is2ftlt(int [],int);  //Is 2 first or last
void prntAry(int [],int);
void swpFtLt(int [],int);
void fillAry(char [],vector<char> &,int &);
void prntAry(char [],vector<char> &,int);
int  score(vector<char> &,vector<char> &,int);
void fillAry(char [][ROWS][COLS],int);
void prntAry(char [][ROWS][COLS],int);
void prntAry(int[][COLS],int);
void glider(char [][ROWS][COLS],int,int,int);
void random(char [][ROWS][COLS],int);
void neybor(char [][ROWS][COLS],int,int [][COLS]);
void nextGen(char [][ROWS][COLS],int,int [][COLS]);
void pause(int);
void fillAry(char [],int);
void prntAry(char [],int);
void player1(char [],int);
void player2(char [],int);
bool isWon(char [],int);
void count2s(int [],int);



//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int menuItm; //Choice for menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for: Savitch_9thEd_Chap7_PracProg1_firstLast2"<<endl;
        cout<<"2.  Type 2  for: Savitch_9thEd_Chap7_PracProg3_swapFrontBack"<<endl;
        cout<<"3.  Type 3  for: Savitch_9thEd_Chap7_PracProg4_PhoneBook"<<endl;
        cout<<"4.  Type 4  for: Savitch_9thEd_Chap7_ProgProj10_TicTacToe"<<endl;
        cout<<"5.  Type 5  for: Savitch_9thEd_Chap7_PracProg2_countNum2s"<<endl;
        cout<<"6.  Type 6  for: Gaddis_8thEd_Chap7_Prob10_DMV"<<endl;
        cout<<"7.  Type 7  for: Savitch_9thEd_Chap7_ProgProj13_GameOfLife"<<endl;
        cout<<"8.  Type 8  for: Gaddis_8thEd_Chap7_Prob2_RainyDays"<<endl;
        cout<<"9.  Type 9  for: Problem I"<<endl;
        cout<<"10. Type 10 for: Problem J"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:problem1();break;
            case 2:problem2();break;
            case 3:problem3();break;
            case 4:problem4();break;
            case 5:problem5();break;
            case 6:problem6();break;
            case 7:problem7();break;
            case 8:problem8();break;
            case 9:problem9();break;
            case 10:problem10();
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}

//*************************   Problem 1 ****************************************
//Purpose:  Put function purpose here!
//Inputs:   Inputs to the function here  -> Description, Range, Units
//Output:   Outputs to the function here -> Description, Range, Units
//******************************************************************************
void problem1(){
    cout<<"Inside Problem A"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}

//*************************   Problem 2 ****************************************
//Purpose:  Put function purpose here!
//Inputs:   Inputs to the function here  -> Description, Range, Units
//Output:   Outputs to the function here -> Description, Range, Units
//******************************************************************************
void problem2(){
    cout<<"Inside Problem B"<<endl;
    //Input values
    //Process values -> Map inputs to Outputs 
    //Display Output
}