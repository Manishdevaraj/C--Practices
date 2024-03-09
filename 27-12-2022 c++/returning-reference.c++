#include<iostream>
using namespace std;
int& somefun();
int main(){

    int x;
   x =  somefun() = 7;
    cout<<x;

}
int& somefun(){
 static int a=2;
  return a;

}