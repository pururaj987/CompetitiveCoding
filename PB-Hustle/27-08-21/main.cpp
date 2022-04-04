#include<bits/stdc++.h>
#define ll long long
using namespace std;

/////////////////////////// Good Sequence //////////
// void solve() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     int sum = 0;
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//         sum += v[i];
//     }
//     if(sum >= 0) {
//         cout << "YES" << endl;
//     } else{
//         cout << "NO" << endl;
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

// 	return 0;
// }


//////////////////////////// YEN //////////////////
// void solve() {
//     int a , b , c , x;
//     int ans = 0;
//     cin >> a >> b >> c >> x;
//     for(int i = 0 ; i <= a ; i++) {
//         for(int j = 0 ; j <= b ; j++) {
//             for(int k = 0 ; k <= c ; k++) {
//                 int total = i * 500 + j * 100 + k * 50;
//                 if(total == x)
//                     ans++;
//             }
//         }
//     }
//     cout << ans << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();

// 	return 0;
// }

/////////////////////////// AZ ///////////////////////
// void solve() {
//     string s;
//     cin >> s;
//     int n = s.length();
//     int back = 0;
//     int front = 0;
//     for(int i = n-1 ; i >= 0 ; i--) {
//         if(s[i] == 'Z') {
//             break;
//         } else {
//             back++;
//         }
//     }
//     for(int i = 0 ; i < n ; i++) {
//         if(s[i] == 'A') {
//             break;
//         } else {
//             front++;
//         }
//     }
//     cout << n - (front + back) << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();

// 	return 0;
// }

/////////////////////////// TT ////////////////
// void solve() {
//     ll x;
//     cin >> x;
//     if(x % 10 == 0) {
//         cout << 0 << endl;
//         return;
//     }
//     if(x % 5 != 0) {
//         cout << -1 << endl;
//         return;
//     }
//     int count = 0;
//     while(1) {
//         x = x * 2;
//         count++;
//         if(x % 10 == 0) {
//             cout << count << endl;
//             return;
//         }
//         count++;
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

// 	return 0;
// }

