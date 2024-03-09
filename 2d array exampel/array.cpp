#include<iostream>
using namespace std;

int main(){

    int n,i,j;

    cin>>n;

    int arr[n][n];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            cin>>arr[i][j];   // arr[0][0] //arr[0][1]
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++){
            cout<<arr[i][j]<<' ';}
        cout<<'\n';
    
    }


    return 0;
}