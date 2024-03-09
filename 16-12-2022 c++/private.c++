#include <bits/stdc++.h>
using namespace std;

class room
{
private:

int length;
int breath;

public:

void getlength()
{
    int l;
    cout<<"enter l : ";
    cin>>l;
    length = l;
}
void getbreath(){
    int b;
    cout<<"enter b : ";
    cin>>b;
    breath = b;
}




 

int calculatearea(){

    cout<<length*breath;
}


};

int main(){
   room r1;
    r1.getlength();
  r1.getbreath();
  cout<<"the area is : ";
  r1.calculatearea();

    return 0;
}