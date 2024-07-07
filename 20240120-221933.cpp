#include<iostream>
const char player = 'X';
const char computer = 'O';
const char blank = ' ';

void printboard();
char playerchoice();
char computerchoice();
void cheackwinner();

int main(){
std::cout<<"*******WELCOME TO TIC TAC TOE GAME*******";
std::cout<<"\n\nYour character is X . \n";


char spaces[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' '};

return 0;
}

char playerchoice(){
int n;
std::cout<<"Enter a number between between 1 to 9 : ";
std::cin>>n;

}

void printboard(){

std::cout<<"+++++++++++++";
std::cout<<

std::cout<<"+++++++++++++";
}