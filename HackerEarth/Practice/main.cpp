#include<bits/stdc++.h>
#define ll long long
using namespace std;
// ios_base :: sync_with_stdio(false);
// cin.tie(NULL);

//////////////////////// Divide Arrays //////////////////////
void solve() {
    
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

//////////////////////// Multiple Of 3///////////////////////
// void solve() {
//     string s;
//     cin >> s;
//     int n = s.length();
//     int sum = 0;
//     for(int i = 0 ; i < n ; i++) {
//         sum += (s[i] - '0');
//     }
//     sum %= 3;
//     int dig = 3 - sum;
//     if(sum == 0) {
//         cout << s << endl;
//         return;
//     } else {
//         bool found = false;
//         for(int i = 0 ; i < n ; i++) {
//             if(!found && s[i] - '0' > dig) {
//                 cout << dig;
//                 found = true;
//             }
//             cout << s[i];
//         }
//         if(!found) {
//             cout << dig;
//         }
//         cout << endl;
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

//////////////////////// Maximize The Sum ///////////////////
// void solve() {
//     int n , k;
//     cin >> n >> k;
//     unordered_map<ll , ll> M;
//     ll sum = 0;
//     for(int i = 0 ; i < n ; i++) {
//         ll x;
//         cin >> x;
//         M[x] ++;
//     }
//     priority_queue<ll> q;
//     for(auto x : M) {
//         q.push(x.first * x.second);
//     }
//     while(k > 0 && !q.empty()) {
//         ll x = q.top();
//         q.pop();
//         if(sum + x > sum) {
//             sum += x;
//         }
//         k--;
//     }
//     cout << sum << endl;

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
// ///////////////////////////// OROROR //////////////////////
// void solve() {
//     int n;
//     ll x;
//     cin >> n >> x;
//     ll arr[n+1];
//     vector<pair<ll , ll>> v;
//     for(int i = 1 ; i <= n ; i++) {
//         cin >> arr[i];
//     }
//     int y = arr[1] | arr[2];
//     for(int i = 3 ; i <= n ; i++) {
//         y |= arr[i];
//     }
//     if(y < x) {
//         cout << 0 << endl;
//         return;
//     }
//     int minLength = INT_MAX;
//     for(int i = 1 ; i <=n-1 ; i++) {
//         ll bitOr = arr[i] | arr[i+1];
//         if(bitOr >= x) {
//             minLength = 2;
//             v.push_back(make_pair(2 , i));
//         } else {
//             int len = 2;
//             for(int j = i+2 ; j <= n ; j++) {
//                 bitOr |= arr[j];
//                 len++;
//                 if(bitOr >= x && len <= minLength) {
//                     minLength = len;
//                     v.push_back(make_pair(len , i));
//                 }
//             }
//         } 
//     }
//     // sort(v.begin() , v.end());
//     int count = 0;
//     // int minLength = v[0].first;
//     for(auto x: v) {
//         if(x.first == minLength) {
//             count++;
//         }
//     }
//     cout << count << endl;
//     for(auto x: v) {
//         if(x.first == minLength) {
//             cout << x.second << " " << x.second + (x.first-1) << endl;
//         }
//     }
//     // for(auto x: v) {
//     //     cout << x.first << 
//     //     cout << x.second << " " << x.second + (x.first-1) << endl;
//     // }

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


//////////////////////////// Erasing Array /////////////////
// bool checkInversion(vector<int> &a) {
//     for(int i = 0 ; i < a.size()-1 ; i++) {
//         if(a[i+1] < a[i]) {
//             return false;
//         }
//     }
//     return true;
// }
// void solve() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     int count = 0;
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//     }
//     bool noInVersion = true;
//     //// check for no inversion
//     if(checkInversion(v)) {
//         cout << 1 << endl;
//         return;
//     }
//     int j = 0;
//     while(j < n) {
//         for(j ; j < n ; j++) {
//             if(j == n-1) {
//                 j++;
//                 break;
//             }
//             if(v[j+1] < v[j]) {
//                 j++;
//                 break;
//             }
//         }
//         count ++;
//     }
//     cout << count << endl;
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

/////////////////////////// Best Player ////////////////////
// bool cmp(const pair<string , ll> &a , const pair<string , ll> &b) {
//     return((a.second > b.second) || (a.second == b.second && a.first < b.first));
// }

// void solve() {
//     int n , t;
//     cin >> n >> t;
//     vector<pair<string , ll>> v(n);
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i].first >> v[i].second;
//     }
//     sort(v.begin() , v.end() , cmp);
//     int count = 0;
//     for(auto x : v) {
//         cout << x.first << endl;
//         count ++;
//         if(count == t) {
//             return;
//         }
//     }
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
// 	solve();
// 	return 0;
// }