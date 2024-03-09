#include<iostream>
using namespace std;
#include<vector>






class stack{

private:
 vector<int>id;
 public:
  void push(int a){
        id.push_back(a);
  }
  
  int top(){

     return id[id.size() - 1];
  }

int pop(){
    auto t = top();
    id.pop_back();
    return t;

}


};

int  main(){

   
 static int a;
       
       stack s1;
       
       while(cin>>a){
              s1.push(a);

       }
        
     cout<<s1.top()<<"\n";

    return 0;
}