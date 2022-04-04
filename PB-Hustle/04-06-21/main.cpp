#include<bits/stdc++.h>
using namespace std;

////////////////////// Square Divisor //////////////
int main() {
    long long int n;
    cin >> n;
    long long int i;
    for(i = 2 ; i * i <= n ; i++) {
        while(n % (i*i) == 0)
            n = n / i;
    }
    cout << n << endl;
}

/////////////////////// i luv 111 and 11/////////////
// void solve() {
//     long long int n;
//     cin >> n;
//     int f = 0;
//     while(n > 0) {
//         if(n % 11 == 0 || n % 111 == 0) {
//             f = 1;
//             break;
//         }
//         n -= 111;
//     }
//     cout << (f == 1 ? "YES" : "NO") << endl;
// }

// int main() {
//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }

//////////////////// C- +- /////////////////////
// void solve() {
//     int x = 0;
//     int n;
//     cin >> n;
//     for(int i = 0 ; i < n ; i++) {
//         string s;
//         cin >> s;
//         if(s.find('+') != string ::npos) {
//             x += 1;
//         }
//         if(s.find('-') != string ::npos) {
//             x -= 1;
//         }
//     }
//     cout << x << endl;
// }

// int main() {
//     solve();
// }

//////////// try o(1) space //////////
// void solve() {
//     string w;
//     cin >> w;
//     unordered_map<char , int> M;
//     for(int i = 0; i < w.length() ; i++) {
//         M[w[i]] ++;
//     }
//     for(auto x: M) {
//         if((x.second % 2) != 0) {
//             cout << "No" << endl;
//             return;
//         }
//     }
//     cout << "Yes" << endl;
// }

// int main() {
//     solve();
// }



//////////////////// Plox solve this //////////
// int main() {
//     long long int n;
//     long long int digits = 0;
//     cin >> n;
//     string num = to_string(n);
//     cout << num.size() << endl;
// }