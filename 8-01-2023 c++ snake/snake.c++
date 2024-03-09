#include<iostream>
#include<windows.h>
#include<snake.h>
using namespace std;
#define W 60
#define H 60


Snake snake({W/2,H/2});
void gameborder(){
    for(int i=0;i<=H+1;i++){
    cout<<"\t\t";

        for(int j=0;j<=W+1;j++){
        if(i==0||i==H+1||j==0||j==W+1)
        cout<<"*";
        else if(i==y&&j==x)
          cout<<"o";
        else
         cout<<" ";
        }
    cout<<endl;

    }
}

int main(){

    while(1){
        Sleep(100);
    gameborder();
       
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,0});
           }
}