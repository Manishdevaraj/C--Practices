#include<bits/stdc++.h>
using namespace std;
int main(){
  int a;
    cout<<"Enter The Value For a :";//user kita irunthu input vankiren.

    cin>>a;

    cout<<a;//input i print panra.

    cout<<'\n'<<&a;//input or a oda value oda memory address i print panra.

    int *p=&a;//input alue and memory address i p kira pointer la save panra.

    cout<<'\n'<<p;//input or a oda value oda memory address i print panra.

    cout<<"\n"<<*p;////input or a oda value i print panren.


    return 0;
}