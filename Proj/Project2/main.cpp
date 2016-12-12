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
#include <string>     //String Library
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const int ROWS=5;//Number of Rows
const int COLS=5;//Number of columns

//Function prototypes
void fillAry(char [ROWS][COLS]);   //Fill in the game board
void prntAry(char [ROWS][COLS]);   //Print the board
char comAtk(char &, char &);      //Computer's Attack/Guesses
void disRule();                   //Display rules
bool coinFlp();                   //Coin flip  
void savGame(int &, string);      //Prompts to output game to file

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    string line;            //Place holder line
    char compCol, compRow;  //Computer Attack
    int shipDir;            //Ship direction for random
    char chosDir;           //Ship direction 
    char human;             //Player inputs
    char humCol, humRow;    //Player's Attack
    char comHeal='5';       //Total computer health
    char humHeal='5';       //Total player health
    int turn=0;             //Tracks turn count
    string name;            //Player's Name 
    bool winner;            //Winning player (0 - Computer, 1 - Player)
    char board[ROWS][COLS]; //The board
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
    
    
    //Initialize
    cout<<"Welcome to the program that emulates a abridged version of the "
        "classic board game, Battleship."<<endl;
    
    //Rules
    disRule();
                
    //Game Setup
    cout<<"What is your desired name? (no spaces)"<<endl;
    cin>>name; //Input Name
    cout<<"Alright then "<<name<<". Get ready for a game of Battleship!"<<endl;
            
    //Set an empty board
    fillAry(board);
    
    //Player's Small Ship
    cout<<"Okay, now choose the placement of the smaller ship. (1x2)"<<endl;
    do{     //Validate Input
        cout<<"Choose a column (A-E, case sensitive):";
        cin>>hsmlC1;       
    }while(hsmlC1<65||hsmlC1>69);   
    do{     //Validate Input
        cout<<"Choose a row (1-5):";
        cin>>hsmlR1;         
    }while(hsmlR1<49||hsmlR1>53);    
    
    //Direction of Player's Small Ship
    do{  //Validate Input
        cout<<"Now choose either Vertical (V) or Horizontal (H):";
        cin>>chosDir;         
    }while(chosDir!='h'&&chosDir!='H'&&chosDir!='v'&&chosDir!='V');              
    switch(chosDir){
        case 'h':
        case 'H': {
            cout<<"You picked Horizontal."<<endl;
            hsmlDr='H';};break;
        case 'v':
        case 'V': {
            cout<<"You picked Vertical."<<endl;
            hsmlDr='V';}  
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
    
    //Display ship locations
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<name<<", your ship locations are:"<<endl;
    cout<<"Small: "<<hsmlC1<<hsmlR1<<" "<<hsmlC2<<hsmlR2<<endl;
    cout<<"Medium: "<<hmedC1<<hmedR1<<" "<<hmedC2<<hmedR2<<" "<<hmedC3<<hmedR3 
        <<endl;  
    cout<<"-------------------------------------------------------------"<<endl;
    
    //Game Start!
    if(coinFlp()==1){
        cout<<name<<" will go first."<<endl;
    }
    else{
        cout<<"Computer will go first."<<endl; 
        cout<<endl;
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
        cout<<name<<"'s remaining health: "<<humHeal<<endl; //Displays User HP       
    }
    
    do{           
        //Player's Turn
        cout<<endl;
        turn++;
        cout<<"                    Turn #"<<turn<<endl;
        cout<<"------------------"<<name<<"'s Turn------------------"<<endl;
        cout<<"Make your guess."<<endl;        
        do{     //Validate Input
            cout<<"Choose a column (A-E, case sensitive):"<<endl;
            cin>>humCol;       
        }while(humCol<65||humCol>69); //65 is char 'A', 69 is char 'E'
        do{     //Validate Input
            cout<<"Choose a row (1-5):"<<endl;
            cin>>humRow;         
        }while(humRow<49||humRow>53);  //49 is char '1', 53 is char '5'
        
        cout<<name<<" attacks "<<humCol<<"-"<<humRow<<"!"<<endl;  
        
        if(humCol==csmlC1&&humRow==csmlR1){          
            cout<<"HIT!"<<endl;
            humRow=humRow-49; //Converts to 0-4     
            humCol=humCol-65; //Converts to 0-4            
            board[humRow][humCol]='X'; //Marker
            comHeal--;
            csmlC1='0';
            csmlR1='0';
        }
        else if(humCol==csmlC2&&humRow==csmlR2){
            cout<<"HIT!"<<endl; 
            humRow=humRow-49; //Converts to 0-4     
            humCol=humCol-65; //Converts to 0-4            
            board[humRow][humCol]='X'; //Marker
            comHeal--;  
            csmlC2='0';
            csmlR2='0';
        }
        else if(humCol==cmedC1&&humRow==cmedR1){
            cout<<"HIT!"<<endl; 
            humRow=humRow-49; //Converts to 0-4     
            humCol=humCol-65; //Converts to 0-4            
            board[humRow][humCol]='X'; //Marker
            comHeal--; 
            cmedC1='0';
            cmedR1='0';
        }
        else if(humCol==cmedC2&&humRow==cmedR2){
            cout<<"HIT!"<<endl; 
            humRow=humRow-49; //Converts to 0-4     
            humCol=humCol-65; //Converts to 0-4            
            board[humRow][humCol]='X'; //Marker
            comHeal--; 
            cmedC2='0';
            cmedR2='0';
        }  
        else if(humCol==cmedC3&&humRow==cmedR3){
            cout<<"HIT!"<<endl; 
            humRow=humRow-49; //Converts to 0-4
            humCol=humCol-65; //Converts to 0-4       
            board[humRow][humCol]='X'; //Marker
            comHeal--;   
            cmedC3='0';
            cmedR3='0';
        }  
        else{
            cout<<"Miss..."<<endl;
        }
        prntAry(board); //Print the board
        if(comHeal=='0')break;  //Breaks out of the code when the computer dies 
        
        //Computer Turn
        cout<<endl;
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
        cout<<name<<"'s remaining health: "<<humHeal<<endl; //Displays User HP
    }while(humHeal!='0'); //Breaks out of the code when the users dies 
    
    //Post Game
    cout<<endl;
    if((comHeal=='0')&&(humHeal!='0')){
        cout<<"*****"<<name<<" Won!*****"<<endl;  
        winner=1;
    }    
    else{
        cout<<"*****You Lose.*****"<<endl;   
        winner=0;
    }    
    cout<<endl;        
    
    //Store Winner
    if(winner==0){
        line='Comp';
    }
    if(winner==1){
        line=name;
    }
    
    //Results
    savGame(turn, line);
    cout<<"*************************************************************"<<endl;
    cout<<"*                    Thanks for playing!                    *"<<endl; 
    cout<<"*************************************************************"<<endl;
    
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
    cout<<"The Computer Attacks "<<compCol<<"-"<<compRow<<"!"<<endl;
    return compCol, compRow;
}

//****************************   disRule  **************************************
//Purpose:  Displays the rules
//Inputs:   None
//Output:   None
//******************************************************************************
void disRule(){
    //Declare Variables
    char human;
    //Initialize
    cout<<"----------------------------Rules----------------------------"<<endl;
    cout<<"Would you like to view the rules? (Y/N):";
    cin>>human;
    switch(human){
        case 'y':
        case 'Y':
            cout<<"1) The board is half the size of the original game. "
                "10x10->5x5)"<<endl;
            cout<<endl;
            cout<<"2) When prompted for guesses, for columns enter (A-E), and "
                "for rows enter (1-5)."<<endl;
            cout<<endl;
            cout<<"3) Turning on caps lock is preferred, as the column guesses "
                "are case sensitive! (Don't worry if you enter a lowercase"
                "letter, you will be able to correct it.)"<<endl;
            cout<<endl;
            cout<<"4) There are two ships in this version, A small (1x2), and a"
                " medium (1x3)."<<endl;
            cout<<endl;
            cout<<"5) First person to sink both of the opponent's ship is the"
                " winner."<<endl;
    }
    cout<<"-------------------------------------------------------------"<<endl;
}

//****************************   coinFlp  **************************************
//Purpose:  Flips a coin to determine turn order
//Inputs:   human, choice of heads or tails
//Output:   Winner of coin flip
//******************************************************************************
bool coinFlp(){
    //Declare Variables
    char human;    //Human input
    int coin;      //Coin flip for heads or tails
    bool isWon;    //Did the player win coin flip
    //Initialize
    cout<<"Coin Flip to find out who goes first."<<endl;
    cout<<"Pick Heads(H) or Tails(T):";
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
            human='H';};break;
        case 't':
        case 'T': {
            cout<<"You picked Tails, the Computer picks Heads."<<endl;
            human='T';};break;  
    }
    coin=rand()%2+1; //The coin flip
    if(coin==1){ //Coin landed on heads
        cout<<"The coin landed on Heads"<<endl;
        if(human=='H') return isWon=1;  //True, player won coin flip
        else return isWon=0;                                 
    }    
    else{ //Coin landed on tails
        cout<<"The coin landed on Tails"<<endl;
        if(human=='T') return isWon=1;  //True, player won coin flip
        else return isWon=0;                   
    }
}

//****************************   savGame  **************************************
//Purpose:  Prompts the user to save the game results to a file.
//Inputs:   human, choice of yes or no
//Output:   Save game file
//******************************************************************************
void savGame(int &turn, string line){
    //Declare Variables
    char human;
    string results;      //Prints the save file
    ifstream in;           //Input file
    ofstream out;          //Output file
    //Initialize
    cout<<"Would you like to save the results to a file? (Y/N):";
    cin>>human;
    switch(human){
        case 'y':
        case 'Y': {
            out.open("score.dat");
            out<<" Winner: "<<line<<" | Number of turns: "<<turn;
            cout<<"Saved!"<<endl;
            cout<<"Would you like to see the results? (Y/N):";
            cin>>human;
            switch(human){
                case 'y':
                case 'Y': {
                    cout<<"The Results:"<<endl;
                    in.open("score.dat");
                    getline(in,results);
                    cout<<results<<endl;
                }   
            }    
        }    
    }
    //Close the file
    in.close();        
    out.close();    
}

//****************************   fillAry  **************************************
//Purpose:  Fills the game board.
//Inputs:   None
//Output:   None
//******************************************************************************
void fillAry(char board[ROWS][COLS]){
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            board[row][col]='-';
        }
    }
}

//****************************   prntAry  **************************************
//Purpose:  Print the game board.
//Inputs:   None
//Output:   board[][] array
//******************************************************************************
void prntAry(char board[COLS][ROWS]){
    //Declare Variables 
    int count=1;
    //Print the generation you want to look at
    cout<<endl;
    cout<<"  A B C D E"<<endl;
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            if(col%5==0)cout<<count++<<" "; //The side of the board
            cout<<board[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}