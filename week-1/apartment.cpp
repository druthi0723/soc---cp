#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> Applicant(n);
    vector<int> apartments(m);
 
    for (int i = 0; i < n; ++i) cin >> Applicant[i];
    for (int i = 0; i < m; ++i) cin >> apartments[i];
 
    sort(Applicant.begin(), Applicant.end());
    sort(apartments.begin(), apartments.end());
 
    int result = 0;
    int i = 0, j = 0;
 
    while (i < n && j < m) {
        if (abs(Applicant[i] - apartments[j]) <= k) {
            result++;
            i++;
            j++;
        } else if (apartments[j] < Applicant[i] - k) {
            j++;
        } else {
            i++;
        }
    }
 
    cout << result << "\n";
    return 0;
}
