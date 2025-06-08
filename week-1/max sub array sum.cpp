#include<iostream>
using namespace std;
#define ll long long
int main(){
    #define INT_MIN -2147483648 // Correct definition for INT_MIN
    ll n;
    cin>>n;
    ll A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    };
    ll cursum=0;
    ll maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        cursum+=A[i];
       
        if(cursum>maxsum){
            maxsum=cursum;
        }
         if(cursum<0){
            cursum=0;
        }
    }
    cout<<maxsum<<"\n";
    return 0;
 
 
}
