/* 
 * File:   main.cpp
 * Author: Cody Steimle
 * Created on October 5, 2016, 9:52 AM
 * Purpose:  Sorting Problem
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int a,b,c,d;
    
    //Input or initialize values Here
    cout<<"Give four integers for a b c and d:"<<endl;
    cin>>a>>b>>c>>d;
    
    //Process/Calculations Here
    cout<<"Sorting of a and b:"<<endl;
    if (a<=b)
    cout<<a<<" "<<b<<endl;
    else if (a>b)
    cout<<b<<" "<<a<<endl;
    
    cout<<"Sorting of a b and c:"<<endl;
    if (a<=b&&a<=c){
    cout<<a;
        if (b<=c)
        cout<<" "<<b<<" "<<c<<endl;
       else if (b>c)
        cout<<" "<<c<<" "<<b<<endl;
    }
    else if (b<=a&&b<=c){
    cout<<b;
        if (a<=c)
        cout<<" "<<a<<" "<<c<<endl;
        else if (a>c)
        cout<<" "<<c<<" "<<a<<endl;
    }
    else if (c<=a&&c<=b){
    cout<<c;
        if (a<=b)
        cout<<" "<<a<<" "<<b<<endl;
        else if (a>b)
        cout<<" "<<b<<" "<<a<<endl;
    }
    
    cout<<"Sorting of a b c and d:"<<endl;
    if (a<=b&&a<=c&&a<=d){    
    cout<<a;
        if (b<=d&&b<=c){
        cout<<" "<<b;
            if (d<=c)
            cout<<" "<<d<<" "<<c<<endl;
            else if (d>c)
            cout<<" "<<c<<" "<<d<<endl;
            }
        else if (d<=b&&d<=c){
        cout<<" "<<d;
            if (b<=c)
            cout<<" "<<b<<" "<<c<<endl;
            else if (b>c)
            cout<<" "<<c<<" "<<b<<endl;
            }
        else if (c<=b&&c<=d){
        cout<<" "<<c;
            if (b<=d)
            cout<<" "<<b<<" "<<d<<endl;
            else if (b>d)
            cout<<" "<<d<<" "<<b<<endl;
            }
    }
    else if (b<=a&&b<=c&&b<=d){
        cout<<b; 
        if (a<=d&&a<=c){
        cout<<" "<<a;
            if (d<=c)
            cout<<" "<<d<<" "<<c<<endl;
            else if (d>c)
            cout<<" "<<c<<" "<<d<<endl;
            }
        else if (d<=a&&d<=c){
        cout<<" "<<d;
            if (a<=c)
            cout<<" "<<a<<" "<<c<<endl;
            else if (a>c)
            cout<<" "<<c<<" "<<a<<endl;
            }
        else if (c<=a&&c<=d){
        cout<<" "<<c;
            if (a<=d)
            cout<<" "<<a<<" "<<d<<endl;
            else if (a>d)
            cout<<" "<<d<<" "<<a<<endl;
            }
    }   
    else if (c<=a&&c<=b&&c<=d){
    cout<<c; 
        if (a<=b&&a<=d){
        cout<<" "<<a;
            if (b<=d)
            cout<<" "<<b<<" "<<d<<endl;
            else if (b>d)
            cout<<" "<<d<<" "<<b<<endl;
            }
        else if (b<=a&&b<=d){
        cout<<" "<<b;
            if (a<=d)
            cout<<" "<<a<<" "<<d<<endl;
            else if (a>d)
            cout<<" "<<d<<" "<<a<<endl;
            }
        else if (d<=a&&d<=b){
        cout<<" "<<d;
            if (a<=b)
            cout<<" "<<a<<" "<<b<<endl;
            else if (a>b)
            cout<<" "<<b<<" "<<a<<endl;
            }
    }       
    else if (d<=a&&d<=b&&d<=c){
    cout<<d; 
        if (a<=b&&a<=c){
        cout<<" "<<a;
            if (b<=c)
            cout<<" "<<b<<" "<<c<<endl;
            else if (b>c)
            cout<<" "<<c<<" "<<b<<endl;
            }
        else if (b<=a&&b<=c){
        cout<<" "<<b;
            if (a<=c)
            cout<<" "<<a<<" "<<c<<endl;
            else if (a>c)
            cout<<" "<<c<<" "<<a<<endl;
            }
        else if (c<=a&&c<=b){
        cout<<" "<<c;
            if (a<=b)
            cout<<" "<<a<<" "<<b<<endl;
            else if (a>b)
            cout<<" "<<b<<" "<<a<<endl;
            }
    }
    //Exit
    return 0;
}

