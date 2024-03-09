#include <bits/stdc++.h>
using namespace std;
// (-b+_sqrtb*b-4ac)/(2*a) discriminant=b*b-4ac
int main(){

  int a,b,c,dis,r1,r2;
  cout<<" the quadratic equation is ax2+bx+c=0 :"<<endl;
  cout<<"enter the value for a:";
  cin>>a;
  cout<<"enter the valure for b:";
  cin>>b;
  cout<<"enter the value for c:";
  cin>>c;
  
  
  dis = (b*b) - ( 4*a*c);
  cout<<dis<<endl;

  if(dis>=0)
  {
    
    r1 =( (- b) + (sqrt(dis)) ) /(2*a);
    r2 = ( (- b) - (sqrt(dis)) ) /(2*a);
    cout<<"r1 is :"<<r1<<endl<< "r2 is :"<<r2 <<endl<<fixed<<setprecision(10);
   

  }

  else
  {
    int rel,im;
    rel = -b/(2*a) ;
    im = sqrt(-dis)/(2*a);
    cout<<"r1 is : "<<rel<<" + "<<im<<endl<<setprecision(10);
    cout<<"r2 is : "<<rel<<" - "<<im<<setprecision(10);
    


  }

  return 0;

}