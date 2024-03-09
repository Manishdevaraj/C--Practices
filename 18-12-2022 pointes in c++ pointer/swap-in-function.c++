#include<bits/stdc++.h>
using namespace std;

/*void swap(int*p1,int*p2){

     int q;

     q = *p1;

     *p1 = *p2;

     *p2 = q;


}

int main(){

  int a , b;

  cout<<"Enter The value of a and b to swap :";

  cin>>a>>b;
   
   swap(&a,&b);
   cout<<a<<"\n"<< b;

    return 0;
}*/

void swap(int *p1,int *p2){

     int q;
     q=*p1;
     *p1=*p2;
     *p2 =q;

}
int main(){





int a=20,b=30;

swap(&a,&b);

cout<<a<<endl<<b;

     return 0;
}