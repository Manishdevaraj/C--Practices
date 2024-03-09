
#include<bits/stdc++.h>
using namespace std;
int main(){



vector<string>grocery;
string items;
cout<<"enter the items for grocery list:";


    
while(cin>>items){
    grocery.push_back(items);
}



   for(auto i:grocery){
    cout<<i<<"\n";
   }
    return 0;
}