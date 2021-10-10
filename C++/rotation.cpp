#include<iostream>
using namespace std;


void RotArray(int a[],int n, int k){
    int b[n];
    //Moving k position
    for(int i=0;i<n;i++){
        b[(i+k)%n]=a[i];
    }

    //display values
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}
int main(){
    int n,k;  cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    RotArray(a,n,k);

    return 0;
}