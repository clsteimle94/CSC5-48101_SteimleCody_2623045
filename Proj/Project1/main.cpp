/* 
   File:   main
   Author: Cody Steimle
   Created on October 20th, 2016, 3:30 PM
   Purpose:  To play a altered version of the classic board game Battleship
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cstdlib>    //Random number generator
#include <ctime>      //Time
#include <fstream>    //File input and output
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
char comAtk(char &, char &);  //Computer's Attack/Guesses

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    char comptr;           //Computer Inputs
    char compCol, compRow; //Computer Attack
    int shipDir;           //Ship direction for random
    char chosDir;          //Ship direction 
    int coin;              //Coin flip for heads or tails
    char human;            //Player inputs
    char humCol, humRow;   //Player's Attack
    char comHeal='5';      //Total computer health
    char humHeal='5';      //Total player health
    int turn=0;            //Tracks turn count
    string name;           //Player's Name 
    //Small ship Human
    char hsmlC1, hsmlR1;   //1x2 Base
    char hsmlC2, hsmlR2;   //1x2 Tail
    char hsmlDr;           //Direction
    //Small ship Comp
    char csmlC1, csmlR1;   //1x2 Base
    char csmlC2, csmlR2;   //1x2 Tail
    char csmlDr;           //Direction
    //Medium ship Human
    char hmedC1, hmedR1;   //1x3 Base
    char hmedC2, hmedR2;   //1x3 Tail
    char hmedC3, hmedR3;   //1x3 Tail
    char hmedDr;           //Direction
    //Medium ship Comp
    char cmedC1, cmedR1;   //1x3 Base
    char cmedC2, cmedR2;   //1x3 Tail
    char cmedC3, cmedR3;   //1x3 Tail
    char cmedDr;           //Direction
    
    
    //Input Name
    cout<<"Welcome to the program that emulates a abridged version of "
            "the classic board game, Battleship."<<endl;
    
    //Rules
    cout<<"----------------------------Rules----------------------------"<<endl;
    cout<<"Would you like to view the rules? (Y/N)"<<endl;
    cin>>human;
    switch(human){
        case 'y':
        case 'Y': {
            cout<<"*The board is half the size of the original game. (10x10->"
                    "5x5)"<<endl;
            cout<<"*When prompted for guesses, for columns enter (A-E), and for"
                    "rows enter (1-5)."<<endl;
            cout<<"*Turning on caps lock is preferred, as the column guesses "
                    "are case sensitive! (Don't worry if you enter a lowercase"
                    "letter, you will be able to correct it.)"<<endl;
            cout<<"*There are two ships in this version, A small (1x2), and a "
                    "medium (1x3)."<<endl;
            cout<<"*First person to sink both of the opponent's ship is the"
                    " winner."<<endl;
        };break;
    }
    cout<<"-------------------------------------------------------------"<<endl;
                
    //Game Setup
    cout<<"What is your desired name? (no spaces)"<<endl;
    cin>>name;
    cout<<"Alright then "<<name<<". Get ready for a game of Battleship!"<<endl;
            
    //Player's Small Ship
    cout<<"Okay, now choose the placement of the smaller ship. (1x2)"<<endl;
    do{     //Validate Input
        cout<<"Choose a column (A-E, case sensitive):"<<endl;
        cin>>hsmlC1;       
    }while(hsmlC1<65||hsmlC1>69);   
    do{     //Validate Input
            cout<<"Choose a row (1-5):"<<endl;
            cin>>hsmlR1;         
    }while(hsmlR1<49||hsmlR1>53);     
    //Direction of Player's Small Ship
    cout<<"Now choose either Vertical (V) or Horizontal (H)."<<endl;
    //Validate Input
    do{
        cin>>chosDir;
        if(chosDir=='h'||chosDir=='H'||chosDir=='v'||chosDir=='V'){ 
            
        }       
        else{
            cout<<"Pick Vertical (V) or Horizontal (H):"<<endl;
        }            
    }while(chosDir!='h'&&chosDir!='H'&&chosDir!='v'&&chosDir!='V');              
    switch(chosDir){
        case 'h':
        case 'H': {
            cout<<"You picked Horizontal."<<endl;
            hsmlDr='H';};break;
        case 'v':
        case 'V': {
            cout<<"You picked Vertical."<<endl;
            hsmlDr='V';};break;  
    }                 
    if(hsmlDr=='V'){    //Vertical
        hsmlC2=hsmlC1;
        if(hsmlR1+1>53){  //Keep the ship inside the board
            hsmlC2=hsmlC1-1;               
        }
        else{
            hsmlR2=hsmlR1+1;  
        }
    }
    else if(hsmlDr=='H'){  //Horizontal
        if(hsmlC1+1>69){
            hsmlC2=hsmlC1-1;               
        }
        else{
            hsmlC2=hsmlC1+1;  
        }
        hsmlR2=hsmlR1;
    }
    
    //Computer's Small Ship
    csmlC1=rand()%5+65;       //Calls random function, then modifies to A-E
    csmlR1=rand()%5+49;       //Calls random function, then modifies to 1-5
    //Direction of Computer's Small Ship
    shipDir=rand()%10+1;
    if(shipDir<=5){    //Vertical
        csmlDr='V';
        csmlC2=csmlC1;
        if(csmlR1+1>53){
            csmlR2=csmlR1-1;               
        }
        else{
            csmlR2=csmlR1+1;  
        }
    }
    else if(shipDir>5){  //Horizontal
        csmlDr='H';
        if(csmlC1+1>69){  //Keep the ship inside the board
            csmlC2=csmlC1-1;               
        }
        else{
            csmlC2=csmlC1+1;  
        }
        csmlR2=csmlR1;
    }	
    //Computer's Medium Ship
    do{
        cmedC1=rand()%5+65;       //Calls random function, then modifies to A-E
        cmedR1=rand()%5+49;       //Calls random function, then modifies to 1-5
    }while(cmedC1==csmlC1||cmedR1==csmlR1);
    //Direction of Computer's Medium Ship  
    shipDir=rand()%10+1;      
    if(shipDir<=5){  //Vertical
        cmedDr='V';
        if(cmedDr==csmlDr){  //If the directions are the same
            if(csmlC1==cmedC1){
                if(cmedC1+1>69){  //Keep the ship inside the board
                    cmedC1=cmedC1-1;
                }
                else{
                    cmedC1=cmedC1+1;
                }                              
            } 
            if(cmedR1+2>53){  //Keep the ship inside the board
                cmedR2=cmedR1-1;
                cmedR3=cmedR2-1;
            }
            else{
                cmedR2=cmedR1+1;
                cmedR3=cmedR2+1;
            }
            cmedC2=cmedC1;
            cmedC3=cmedC1;
        } 
        else{ 
            if(csmlC1+2>69){  //Keep the ship inside the board
                cmedC1=csmlC1-2; 
            }
            else{
                cmedC1=csmlC1+2;
            }    
            if(cmedR1+2>53){  //Keep the ship inside the board
                cmedR2=cmedR1-1;
                cmedR3=cmedR2-1;
            }
            else{
                cmedR2=cmedR1+1;
                cmedR3=cmedR2+1;
            }
            cmedC2=cmedC1;
            cmedC3=cmedC1;
        }
    }
    else if(shipDir>5){  //Horizontal
        cmedDr='H';
        if(cmedDr==csmlDr){  //If the directions are the same
            if(csmlR1==cmedR1){
                if(cmedR1+1>53){  //Keep the ship inside the board
                    cmedR1=cmedR1-1;
                }
                else{
                    cmedR1=cmedR1+1;
                }                              
            } 
            if(cmedC1+2>69){  //Keep the ship inside the board
                cmedC2=cmedC1-1;
                cmedC3=cmedC2-1;
            }
            else{
                cmedC2=cmedC1+1;
                cmedC3=cmedC2+1;
            }
            cmedR2=cmedR1;
            cmedR3=cmedR1;
        } 
        else{ 
            if(csmlR1+2>53){  //Keep the ship inside the board
                cmedR1=csmlR1-2; 
            }
            else{
                cmedR1=csmlR1+2;
            }    
            if(cmedC1+2>69){  //Keep the ship inside the board
                cmedC2=cmedC1-1;
                cmedC3=cmedC2-1;
            }
            else{
                cmedC2=cmedC1+1;
                cmedC3=cmedC2+1;
            }
            cmedR2=cmedR1;
            cmedR3=cmedR1;
        }
    }
	
    //Player's Medium Ship
    cout<<"Okay, now the placement of the second ship will be random to prevent"
            " overlapping of pieces."<<endl;
     do{
        hmedC1=rand()%5+65;       //Calls random function, then modifies to A-E
        hmedR1=rand()%5+49;       //Calls random function, then modifies to 1-5
    }while(hmedC1==hsmlC1||hmedR1==hsmlR1);
    //Direction of Computer's Medium Ship  
    shipDir=rand()%10+1;      
    if(shipDir<=5){  //Vertical
        hmedDr='V';
        if(hmedDr==hsmlDr){  //If the directions are the same
            if(hsmlC1==hmedC1){
                if(hmedC1+1>69){  //Keep the ship inside the board
                    hmedC1=hmedC1-1;
                }
                else{
                    hmedC1=hmedC1+1;
                }                              
            } 
            if(hmedR1+2>53){
                hmedR2=hmedR1-1;
                hmedR3=hmedR2-1;               
            }
            else{
                hmedR2=hmedR1+1;
                hmedR3=hmedR2+1;
            }
            hmedC2=hmedC1;
            hmedC3=hmedC1;
        } 
        else{ 
            if(hsmlC1+2>69){  //Keep the ship inside the board
                hmedC1=hsmlC1-2; 
            }
            else{
                hmedC1=hsmlC1+2;
            }    
            if(hmedR1+2>53){  //Keep the ship inside the board
                hmedR2=hmedR1-1;
                hmedR3=hmedR2-1;
            }
            else{
                hmedR2=hmedR1+1;
                hmedR3=hmedR2+1;
            }
            hmedC2=hmedC1;
            hmedC3=hmedC1;
        }
    }
    else if(shipDir>5){  //Horizontal
        hmedDr='H';
        if(hmedDr==hsmlDr){  //If the directions are the same
            if(hsmlR1==hmedR1){
                if(hmedR1+1>53){
                    hmedR1=hmedR1-1;
                }
                else{
                    hmedR1=hmedR1+1;
                }                              
            } 
            if(hmedC1+2>69){  //Keep the ship inside the board
                hmedC2=hmedC1-1;
                hmedC3=hmedC2-1;
            }
            else{
                hmedC2=hmedC1+1;
                hmedC3=hmedC2+1;
            }
            hmedR2=hmedR1;
            hmedR3=hmedR1;
        } 
        else{ 
            if(hsmlR1+2>53){  //Keep the ship inside the board
                hmedR1=hsmlR1-2; 
            }
            else{
                hmedR1=hsmlR1+2;
            }    
            if(hmedC1+2>69){  //Keep the ship inside the board
                hmedC2=hmedC1-1;
                hmedC3=hmedC2-1;
            }
            else{
                hmedC2=hmedC1+1;
                hmedC3=hmedC2+1;
            }
            hmedR2=hmedR1;
            hmedR3=hmedR1;
        }
    }			
    cout<<name<<", your ship locations are:"<<endl;
    cout<<"Small: "<<hsmlC1<<hsmlR1<<" "<<hsmlC2<<hsmlR2<<endl;
    cout<<"Medium: "<<hmedC1<<hmedR1<<" "<<hmedC2<<hmedR2<<" "
            <<hmedC3<<hmedR3<<endl;        
    
    //Game Start!
    cout<<"Coin Flip to find out who goes first."<<endl;
    cout<<"Pick Heads(H) or Tails(T):"<<endl;
    do{  //Validate Input
        cin>>human;
        if(human=='h'||human=='H'||human=='t'||human=='T'){        
        }else{
            cout<<"Pick Heads(H) or Tails(T):"<<endl;
        }            
    }while(human!='h'&&human!='H'&&human!='t'&&human!='T');            
    switch(human){
        case 'h':
        case 'H': {
            cout<<"You picked Heads, the Computer picks Tails."<<endl;
            comptr='T';
            human='H';};break;
        case 't':
        case 'T': {
            cout<<"You picked Tails, the Computer picks Heads."<<endl;
            comptr='H';
            human='T';};break;  
    }
    coin=rand()%2+1;
    if(coin==1){
        cout<<"The coin landed on Heads"<<endl;
        if(human=='H')
            cout<<name<<" will go first."<<endl;
        else{
            cout<<"Computer will go first."<<endl; 
            turn++;
            cout<<"                    Turn #"<<turn<<endl;
            comAtk(compCol, compRow);
            if(compCol==hsmlC1&&compRow==hsmlR1){
                cout<<"HIT!"<<endl; 
                humHeal--;
                hsmlC1='0';
                hsmlR1='0';
            }
            else if(compCol==hsmlC2&&compRow==hsmlR2){
                cout<<"HIT!"<<endl; 
                humHeal--; 
                hsmlC2='0';
                hsmlR2='0';
            }
            else{
                cout<<"Miss..."<<endl;
            }              
        }    
    }    
    else{
        cout<<"The coin landed on Tails"<<endl;
        if(human=='T')
            cout<<name<<" will go first."<<endl;
        else{
            cout<<"Computer will go first."<<endl;
            turn++;
            cout<<"                    Turn #"<<turn<<endl;
            comAtk(compCol, compRow);
            if(compCol==hsmlC1&&compRow==hsmlR1){
                cout<<"HIT!"<<endl; 
                humHeal--;
                hsmlC1='0';
                hsmlR1='0';
            }
            else if(compCol==hsmlC2&&compRow==hsmlR2){
                cout<<"HIT!"<<endl; 
                humHeal--; 
                hsmlC2='0';
                hsmlR2='0';
            }
            else{
                cout<<"Miss..."<<endl;
            }              
        }               
    }
    do{           
        //Player's Turn
        turn++;
        cout<<"                    Turn #"<<turn<<endl;
        cout<<"------------------"<<name<<"'s Turn------------------"<<endl;
        cout<<"Make your guess."<<endl;        
        do{     //Validate Input
            cout<<"Choose a column (A-E, case sensitive):"<<endl;
            cin>>humCol;       
        }while(humCol<65||humCol>69);   
        do{     //Validate Input
            cout<<"Choose a row (1-5):"<<endl;
            cin>>humRow;         
        }while(humRow<49||humRow>53);  
        
        cout<<name<<" attacks "<<humCol<<"-"<<humRow<<"!"<<endl;
        
        if(humCol==csmlC1&&humRow==csmlR1){
            cout<<"HIT!"<<endl; 
            comHeal--;
            csmlC1='0';
            csmlR1='0';
        }
        else if(humCol==csmlC2&&humRow==csmlR2){
            cout<<"HIT!"<<endl; 
            comHeal--;  
            csmlC2='0';
            csmlR2='0';
        }
        else if(humCol==cmedC1&&humRow==cmedR1){
            cout<<"HIT!"<<endl; 
            comHeal--; 
            cmedC1='0';
            cmedR1='0';
        }
        else if(humCol==cmedC2&&humRow==cmedR2){
            cout<<"HIT!"<<endl; 
            comHeal--; 
            cmedC2='0';
            cmedR2='0';
        }  
        else if(humCol==cmedC3&&humRow==cmedR3){
            cout<<"HIT!"<<endl; 
            comHeal--;   
            cmedC3='0';
            cmedR3='0';
        }  
        else{
            cout<<"Miss..."<<endl;
        }
        if(comHeal=='0')break;    
        //Computer Turn
        turn++;
        cout<<"                    Turn #"<<turn<<endl;
        comAtk(compCol, compRow);
        if(compCol==hsmlC1&&compRow==hsmlR1){
            cout<<"HIT!"<<endl; 
            humHeal--; 
            hsmlC1='0';
            hsmlR1='0';
        }       
        else if(compCol==hsmlC2&&compRow==hsmlR2){
            cout<<"HIT!"<<endl; 
            humHeal--; 
            hsmlC2='0';
            hsmlR2='0';
        }
        else if(compCol==hmedC1&&compRow==hmedR1){
            cout<<"HIT!"<<endl; 
            humHeal--; 
            hmedC1='0';
            hmedR1='0';
        }
        else if(compCol==hmedC2&&compRow==hmedR2){
            cout<<"HIT!"<<endl; 
            humHeal--; 
            hmedC2='0';
            hmedR2='0';
        }
        else if(compCol==hmedC3&&compRow==hmedR3){
            cout<<"HIT!"<<endl; 
            humHeal--; 
            hmedC3='0';
            hmedR3='0';
        }
        else{
        cout<<"Miss..."<<endl;
        }              
    }while(comHeal>=49||humHeal>=49);
    
    //Post Game
    cout<<endl;
    if(comHeal=='0')
        cout<<"*****"<<name<<" Won!*****"<<endl;    
    if(humHeal=='0')
        cout<<"*****You Lose.*****"<<endl;   
    cout<<endl;        
    cout<<"Thanks for playing!"<<endl; 
    
    //Exit Program
    return 0;
}

//****************************   comAtk   **************************************
//Purpose:  The computer's randomized guess
//Inputs:   compCol and compRow passed through
//Output:   Column and Row guess
//******************************************************************************

char comAtk(char &compCol, char &compRow){
    compCol=rand()%5+65;       //Calls random function, then modifies to A-E
    compRow=rand()%5+49;       //Calls random function, then modifies to 1-5
    cout<<"------------------Computer's Turn------------------"<<endl;
    cout<<"The Computer Attacks "<<compCol<<compRow<<" !"<<endl;
    return compCol, compRow;
}