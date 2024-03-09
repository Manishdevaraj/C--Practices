#include<bits/stdc++.h>
using namespace std;

int mai();
int main(){

   vector<int>names = {1,2,3,4,5};       
        auto b = names.begin();
        while(b != names.end())
       { 
        
        cout<<*b<<"\n";
        b++;

        
       }

       mai();
    return 0;
}

int mai(){

   vector<int>names = {1,2,3,4,5};
        
        auto b = names.end();
        while(b != names.begin())
       { 
        
        cout<<*b<<"\n";
        b--;

        
       }
    
}