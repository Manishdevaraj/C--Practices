#include<bits/stdc++.h>
using namespace std;

int arr(int a[])
{

    int sum=0,i;
    for(i=0;i<5;i++){

        sum = sum + a[i];
       return sum;   
        
    }




}


int main()

{


int a[5],sum,i;

cout<<"enter five elements :";

 for( i=0;i<5;i++)
 {

    cin>>a[i];

 }
    cout<< arr(a);

    return 0;
}