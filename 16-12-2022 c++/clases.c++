#include<bits/stdc++.h>
using namespace std;


// eppium class create pannum pathu class appirom classname kodukonum


//public specifir

class tank{

public:

int length,breath;

int calculatearea()
{

    cout<<length*breath<<endl;
}
};
int main(){
  int l , b;
  cout<<"Enter The Value Of length :";      
  cin>>l;
  cout<<"enter the value for breath :";
  cin>>b;
   tank e1; 

   e1.length = l;
   e1.breath = b;
    cout<<"the area of tank is : ";
    e1.calculatearea();



    return 0;
}



