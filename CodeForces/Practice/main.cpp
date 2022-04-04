#include<bits/stdc++.h>
#define ll long long
using namespace std;

//////////////////////// Blue-Red Permutation //////////////
void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    unordered_map<ll , ll> M;
    for(int i = 0 ; i < n ; i++) {
        cin >> v[i];
        M[v[i]] ++;
    }
    string s;
    cin >> s;
                                                                                          
    
    
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

//////////////////////// Minimum Extraction ////////////////
// void solve() {
//     int n;
//     cin >> n;
//     vector<ll> v(n);
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//     }
//     if(n == 1) {
//         cout << v[0] << endl;
//         return;
//     }
//     sort(v.begin() , v.end());
//     vector<ll> res;
//     ll ans = v[0];
//     res.push_back(ans);
//     for(int i = 1 ; i < n ; i++) {
//         v[i] -= ans;
//         res.push_back(v[i]);
//         ans += v[i];
//     }
//     cout << *max_element(res.begin() , res.end()) << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }

/////////////////////// Old Grasshopper //////////////
// void solve() {
//     ll x , n;
//     cin >> x >> n;
//     ll d = 0;
//     if(n % 4 == 1) {
//         d = -n;
//     } else if(n % 4 == 2) {
//         d = 1;
//     } else if(n % 4 == 3) {
//         d = n+1;
//     } else if(n % 4 == 0) {
//         d = 0;
//     }
//     if(x % 2 == 0) {
//         cout << x+d << endl;
//     } else {
//         cout << x-d << endl;
//     }
   
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }

// /////////////////////// Linear Keyboard //////////////
// void solve() {
//     string keyboard , s;
//     cin >> keyboard;
//     cin >> s;
//     unordered_map<char , int> M;
//     for(int i = 0 ; i < keyboard.length() ; i++) {
//         M[keyboard[i]] = i;
//     }
//     int totalTime = 0;
//     for(int i = 1 ; i < s.length() ; i++) {
//         totalTime += abs((M[s[i]] - M[s[i-1]]));
//     }
//     cout << totalTime << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }

//////////////////////////// Stone Game ///////////////
// void solve() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i = 0 ; i < n ; i++)
//         cin >> v[i];
//     int maxElement = *max_element(v.begin() , v.end());
//     int minElement = *min_element(v.begin() , v.end());

// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }


/////////////////////////////// Spy Detected /////////////////

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     unordered_map<int , int> M;
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//         M[v[i]] ++;
//     }
//     for(auto x : M) {
//         if(x.second == 1) {
//             vector<int> ::iterator it = find(v.begin() , v.end() , x.first);
//             cout << (it - v.begin()) + 1 << endl;
//         }
//     }
    
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }

////////////////////////// Eshag Loves Big Arrays //////////////////
// void solve() {
//     int n;
//     cin >> n;
//     int count = 0;
//     unordered_map<int , int> M;
//     vector<int> v(n);
//     for(int i = 0 ; i < n ; i++) {
//        cin >> v[i];
//        M[v[i]] ++;
//     }
//     int min = *min_element(v.begin() , v.end());
//     for(auto x : M) {
//         if(x.first != min)
//             count += x.second;
//     }
//     cout << count << endl;

// }

// int main() {
//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }

///////////////////////// Strange Subsequence /////////////////
// void solve() {
//     int n;
//     cin >> n;
//     vector<long long int> a(n);
//     for(int i = 0 ; i < n ; i++)
//         cin >> a[i];
//     sort(a.begin() , a.end());
//     int p = n - 1;
//     for(int i = 0 ; i < p ; i++) {
//         if((a[i+1] - a[i]) < a[p]) {
//             i --;
//             p --;
//         }
//     }
//     cout << p + 1 << endl;   
// }

// int main() {
//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }