#include<iostream>
#include<map>
#define ll long long
using namespace std;    
int main(){
    int n,target;
    cin >> n >> target;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    };   
    bool found = false;
    map<ll,int>m;
    for(int i=0;i<n;i++){
        if(m.count(target-a[i]) && m[target-a[i]]!=i){
            int firstIndex = i+1;
            int secondIndex = m[target-a[i]]+1;
            cout<<min(firstIndex,secondIndex)<<" "<<max(firstIndex,secondIndex)<<endl;
            found = true;
            break;
        }
        else{
            m[a[i]] = i;
        }
    };
    if(!found) cout << "IMPOSSIBLE" << endl;
    return 0;
    
}
