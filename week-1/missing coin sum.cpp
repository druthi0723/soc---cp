#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    
    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    
    sort(coins.begin(), coins.end());
    
    long long sum = 0;  // Largest sum we can make so far
    
    for(int i = 0; i < n; i++) {
        if(coins[i] > sum + 1) {
            // We found a gap! Cannot make sum+1
            break;
        }
        sum += coins[i];
    }
    
    cout << sum + 1 << endl;
    return 0;
}
