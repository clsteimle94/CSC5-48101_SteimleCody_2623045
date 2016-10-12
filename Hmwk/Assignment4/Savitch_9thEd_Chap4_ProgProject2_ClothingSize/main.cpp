/* 
   File:   main
   Author: Cody Steimle
   Created on October 11, 2016, 3:00 PM
   Purpose:  Calculate clothing sizes based on user traits
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
    char ans;                         //answer for looping
    int age, weight;                  //age in years, weight in pounds 
    float height, hat, jacket, waist; //height in inches, hat size, jacket chest size, waist size
    
    //Looping
    do{
    
    //Input values
    cout<<"This program will help find your clothing sizes."<<endl;
    cout<<"Please input your height in inches:"<<endl;
    cin>>height;
    cout<<"Please input your weight in pounds:"<<endl;
    cin>>weight;
    cout<<"Please input your age in years:"<<endl;
    cin>>age;
    
    //Process values -> Map inputs to Outputs
    hat=weight/height*2.9;      
    if(age>=40){
        jacket=height*weight/288+((age/10-3)*0.125);
        waist=weight/5.7+(((age-28)/2)*0.1);
        }       
    else if (age>=30){
        jacket=height*weight/288;
        waist=weight/5.7+(((age-28)/2)*0.1);
        }
    else{
        jacket=height*weight/288;
        waist=weight/5.7;
        }
    
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);  

    //Display
    cout<<"Your hat size is:          "<<hat<<" inches"<<endl;
    cout<<"Your jacket size (chest): "<<jacket<<" inches"<<endl;
    cout<<"Your waist size:          "<<waist<<" inches"<<endl;
          
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>ans;
    }while((ans=='y')||(ans=='Y'));
            
    //Exit Program
    return 0;
}