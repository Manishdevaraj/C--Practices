#include <bits/stdc++.h>
using namespace std;

bool ispassword(string s);

int main(){

     string password;
     cout<<"Enter The Password : \n";
     getline(cin,password);

     if( ispassword(password))
        cout<<"strong password";
        else
        cout<<"THE PASSWORD SHOULD CONTAIN ONE SPECIALCHAR AND ONE UPPERCASELETTER AND ONE NUMBER AND MINIMUM LENGTH IS 8;";

return 0;
}


bool ispassword(string s){
       bool containnumber=false,containchar=false,containspchar=false;
     
   for(auto c:s){


       if(isupper(c))
       containchar=true;
       if(ispunct(c))

          containspchar=true;
         if(isdigit(c))
         containnumber=true;


 }

   if(containnumber&&containspchar&&containchar&& s.size()>=8)
   return true;


   return false;







}