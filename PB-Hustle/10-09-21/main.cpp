#include<bits/stdc++.h>
#define ll long long
using namespace std;

//////////////////////// Secret Number ////////////////
void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int ok = 0;
    for(int i = 0 ; i < n ; i++) {
        if(s[i] == 'o')
            ok++;
    }
    int total = 0;
    for(int i = 0 ; i <= 9 ; i++) {
        for(int j = 0 ; j <= 9 ; j++) {
            for(int k = 0 ; k <= 9 ; k++) {
                for(int l = 0 ; l <= 9 ; l++) {
                    set<int> ss;
                    if(s[i]=='x' || s[j]=='x' || s[k]=='x' || s[l]=='x') continue;
                    if(s[i] == 'o')
                        ss.insert(i);
                    if(s[j] == 'o')
                        ss.insert(j);
                    if(s[k] == 'o')
                        ss.insert(k);
                    if(s[l] == 'o')
                        ss.insert(l);
                    if((int)ss.size() == ok) {
                        total++;
                    }
                }
            }
        }
    }
    cout << total << endl;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    solve();
	return 0;
}

//////////////////////// Squared Error ////////////////
// void solve() {
//     int n;
//     cin >> n;
//     vector<ll> v(401 , 0);
//     for(int i = 0 ; i < n ; i++) {
//         int x;
//         cin >> x;
//         x += 200;
//         v[x] ++;
//     }
//     ll total = 0;
//     for(int i = 0 ; i <= 400 ; i++) {
//         for(int j = i+1 ; j <= 400 ; j++) {
//             total += (v[i] * v[j] * (j-i) * (j-i));
//         }
//     }
//     cout << total << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();
// 	return 0;
// }


//////////////////////// Kth Common Divisor ////////////////
// void solve() {
//     int a , b , k;
//     cin >> a >> b >> k;
//     int minNumber = (a < b ? a : b);
//     int n = 0;
//     for(int i = 1 ; i <= minNumber ; i++) {
//         if(a % i == 0 && b % i == 0) {
//             n++;
//         }
//     }
//     vector<int> v(n);
//     int j = 0;
//     for(int i = 1 ; i <= minNumber ; i++) {
//         if(a % i == 0 && b % i == 0) {
//             v[j] = i;
//             j++;
//         }
//     }
//     int count = 1;
//     for(int i = n-1 ; i>=0 ; i--) {
//         if(count == k) {
//             cout << v[i] << endl;
//             return;
//         } else {
//             count ++;
//         }
//     }

// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();
// 	return 0;
// }

//////////////////////// Bounding //////////////
// void solve() {
//     int n , x;
//     cin >> n >> x;
//     vector<int> v(n);
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//     }
//     int count = 1;
//     int d = 0;
//     for(int i = 0 ; i < n ; i++) {
//         d = d + v[i];
//         if(d <= x) {
//             count ++;
//         }
//     }

//     cout << count << endl;


// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();
// 	return 0;
// }

////////////////////////// Security //////////////
// void solve() {
//     string s;
//     cin >> s;
//     int n = s.length();
//     for(int i = 0 ; i < n-1 ; i++) {
//         if(s[i] == s[i+1]) {
//             cout << "Bad" << endl;
//             return;
//         }
//     }

//     cout << "Good" << endl;

// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();
// 	return 0;
// }


////////////////////////// Buying Sweets ///////////////
// void solve() {
//     int x , a , b;
//     cin >> x >> a >> b;
//     int num1 = x - a;
//     cout << num1 % b << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();
// 	return 0;
// }
