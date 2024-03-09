#include<iostream>
using namespace std;
template<typename T>
T maximum(T a,T b,T c){
    T max;
     max = a;
     if(b>max)
      max = b;
      if(c>max)
       max = c;
       return max;
}

int main(){

     cout<<maximum(3,4,5)<<endl;
     cout<<maximum(.5,4.5,7.5);
     

}