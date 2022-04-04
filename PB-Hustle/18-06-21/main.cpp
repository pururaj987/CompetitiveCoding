#include<bits/stdc++.h>
#define ll long long
using namespace std;
// ios_base :: sync_with_stdio(false);
// cin.tie(NULL);


///////////////////// Cream ////////////////
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    for(int i = 1 ; i * i < n ; i++) {
        if(n % i == 0)
            cout << i << endl;
    }
    for(int i = sqrt(n) ; i >=1 ; i--) {
        if(n % i == 0)
            cout << n/i << endl;
    }
    
}
////////////////////// Consecutive ////////////////////
// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;
//     vector<ll> v(n);
//     vector<ll> ans;
//     ll max = 0;
//     for(int i = 0 ; i < n ; i++)
//         cin >> v[i];
//     for(int i = 0 ; i < n; i++) {
//         ans.push_back(v[i]);
//         if(i != n-1) {
//             if(v[i+1] <= v[i]) {
//                 if(ans.size() > max)
//                     max = ans.size();
//                 ans.clear();
//             }
//         }
       
//     }
//     if(ans.size() > max)
//         max = ans.size();
//     cout << max << endl;
// }

///////////////////////// Johny ////////////////////////

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
    
//     ll n , k;
//     cin >> n >> k;
//     ll rem = (n + k) % k;
//     if(rem == 0)
//         cout << n + k << endl;
//     else
//         cout << n + k - rem << endl;
// }