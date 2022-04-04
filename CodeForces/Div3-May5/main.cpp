#include<bits/stdc++.h>
using namespace std;

//////////////////////////////// ORDINARY NUMBERS ///////////////////////////////////
// int main() {
//     int testCase = 0;
//     cin >> testCase;
//     for(int i = 0 ; i < testCase ; i++) {
//         long long int result = 0;
//         long long int n = 0;
//         cin >> n;
//         for(int i = 1 ; i <= 9 ; i++) {
//             long long int x = 0;
//             for(int j = 1 ; j <= 10 ; j++) {
//                 x = x * 10 + i;
//                 if(x <= n)
//                     result ++;
//             }
//         }
//         cout << result << endl;
//     }
// }

///////////////////////////////// SAME DIFFERENCES ////////////////////////////////////
// int main() {
//     int testCase = 0;
//     cin >> testCase;
//     for(int i = 0 ; i < testCase ; i++) {
//         long long int n = 0;
//         cin >> n;
//         long long int arr[n];
//         long long int result = 0;
//         for(int j = 0 ; j < n ; j++) {
//             cin >> arr[j];
//         }
//         for(int k = 0 ; k < n-1 ; k++) {
//             for(int l = k + 1 ; l < n ; l++) {
//                 if(arr[l] - arr[k] == l - k)
//                     result++;
//             }
//         }
//         cout << result << endl;
//     }
//     return 0;
// }

///////////////// Don't get distracted ////////////////
// void solve() {
//     int n;
//     string s;
//     cin >> n;
//     cin >> s;
//     unordered_map<char , int> M;
//     for(int i = 0 ; i < n ; i++) {
//         if( M.find(s[i]) == M.end() ) {
//             M[s[i]] = 1;
//         } else {
//             if(M[s[i]] == 0) {
//                 cout << "NO" << endl;
//                 return;
//             }
//         }

//         if(i != n-1) {
//             if(s[i+1] != s[i]) {
//                 M[s[i]] = 0;
//             }
//         }
//     }
//     cout << "YES" << endl;
// }

// int main() {
//     int testCase;
//     cin >> testCase;
//     while(testCase --) {
//         solve();
//     }
// }

//////////////// Same Differences ///////////////
void solve() {
    long long int count = 0;
    long long int n;
    cin >> n;
    unordered_map<long long int , long long int> M;
    for(long long int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        M[x - i] ++;
    }
    for(auto x : M) {
        long long int z = x.second;
        count += (z * (z-1)) / 2;
    }
    cout << count << endl;
}

int main() {
    int tc;
    cin >> tc;
    while(tc --) {
        solve();
    }
}