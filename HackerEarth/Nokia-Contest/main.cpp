#include<bits/stdc++.h>
#define ll long long 
#define M 1000000007
using namespace std;

///////////////////////////// Number Palindrome ///////////////
void solve() {
    int n;
    cin >> n;
    ll arr[n];
    for(int i = 1 ; i <= n ; i++)
        cin >> arr[i];
    int count = 0;
 
    for (int i = 1; i <= n; i++)
        for (int j = i+1; j <= n; j++)
            for (int k = j+1; k <= n; k++) {
                ll sr = sqrt(arr[i] * arr[j] * arr[k]);
                if(sr * sr == (arr[i] * arr[j] * arr[k]))
                    count ++;
            }
 
    cout << count << endl;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while(tc --) {
        solve();
    }
}
