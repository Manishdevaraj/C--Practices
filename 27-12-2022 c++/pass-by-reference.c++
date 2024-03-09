#include<iostream>
using namespace std;
void sqr(int &);
int main(){
    
    int a = 4;
      sqr(a);

   cout<<a;



}

void sqr(int &b){
     b = b*b;
}