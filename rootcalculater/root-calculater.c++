#include<iostream>
#include<cmath>
using namespace std;

int main(){
int a,b;
cout<<"Enter The n^th root For Rooting : ";
cin>>a;
cout<<"Enter The Value For "<<a<< " root : ";
cin>>b;
cout<<" The "<<a<<"Root Of "<<b<<" is : "<<pow(b,a);
}