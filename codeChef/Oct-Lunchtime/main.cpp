#include<bits/stdc++.h>
#define ll long long
using namespace std;
// ios_base :: sync_with_stdio(false);
// cin.tie(NULL);



////////////////////// Chef And Water ///////////////
void solve() {
   ll n , v;
   cin >> n >> v;
   if(v == 1) {
       ll terms = n-1;
       ll lastTerm = 2 + (terms-1)*1;
       ll sum = (terms * lastTerm)/2;
       cout << sum << " " << sum << endl;
   } else {
        if(n == 1) {
            cout << 0 << " " << 0 << endl;
            return;
        }
        if(v >= n) {
            ll min = n-1;
            ll termsMax = n-1;
            ll lastTermMax = 2 + (termsMax-1)*1;
            ll max = (termsMax * lastTermMax)/2;
            cout << max << " " << min << endl;
        } else {
            ll termsMax = n-1;
            ll lastTermMax = 2 + (termsMax-1)*1;
            ll max = (termsMax * lastTermMax)/2;
            ll min = 0;
            ll termsMin = n-v-1;
            if(termsMin == 0) {
                min = v;
            } else {
                min += v;
                ll lastTermMin = 2*2 + (termsMin-1);
                min += (termsMin * lastTermMin)/2;
            }
            cout << max << " " << min << endl;
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while(tc --) {
        solve();
    }

	return 0;
}

////////////// Exactly N+1 ./////////////
// long long binpow(long long a, long long b) {
//     long long res = 1;
//     while (b > 0) {
//         if (b & 1)
//             res = res * a;
//         a = a * a;
//         b >>= 1;
//     }
//     return res;
// }

// void solve() {
//     int n;
//     cin >> n;
//     ll sumBin = binpow(2 , n);
//     vector<ll> v;
//     if(n == 1) {
//         cout << 1 << " " << 1 << endl;
//     } else if(n == 2) {
//         cout << 1 << " " << 1 << " " << 2 << endl;
//     } else {
//         v.push_back(1);
//         v.push_back(2);
//         v.push_back(2);
//         ll sum = 5;
//         int count = 3;
//         for(int i = 3 ; count <= n-1 ; i++) {
//             v.push_back(i);
//             count++;
//             sum += i;
//         }
//         v.push_back(sumBin - sum);
//         for(auto x: v) {
//             cout << x << " ";
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

// 	return 0;
// }

/////////////// Alt. Work Days ////////
// void solve() {
//     ll a , b , p , q;
//     cin >> a >> b >> p >> q;
//     if(p % a == 0 && q % b == 0) {
//         ll aliceDays = p/a;
//         ll bobDays = q/b;
//         ll diff = aliceDays - bobDays;
//         if(diff == 1 || diff == 0 || diff == -1) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     } else {
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

/////////////////// Category///////////
// void solve() {
//     int x;
//     cin >> x;
//     if(x >=1 && x < 100) {
//         cout << "Easy" << endl;
//     } else if(x >= 100 && x < 200) {
//         cout << "Medium" << endl; 
//     } else if(x >= 200 && x <= 300) {
//         cout << "Hard" << endl;
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