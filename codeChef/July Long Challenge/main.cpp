#include<bits/stdc++.h>
#define ll long long
using namespace std;
// ios_base :: sync_with_stdio(false);
// cin.tie(NULL);

/////////////////////////// MIN NOTES //////////////////
void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    ll notes = 0;
    for(int i = 0 ; i < n ; i++) {
        cin >> v[i];
    }
    sort(v.begin() , v.end());
    ll gcd = 0;
    for(int i = 0 ; i < n ; i++) {
        gcd = __gcd(gcd , v[i]);
    }
    v[n-1] = gcd;
    for(int i = 0 ; i < n ; i++) {
        notes += (v[i] / gcd);
    }
    cout << notes << endl;
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

/////////////////////////// Relativity ///////////////////
// void solve() {
//     int g , c;
//     cin >> g >> c;
//     cout << (c * c)/(2*g) << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while(tc --) {
// 	    solve();
//     }
// 	return 0;
// }

/////////////////////////// MAx Production //////////////////////
// void solve() {
//     int d , x , y , z;
//     cin >> d >> x >> y >> z;
//     int first = x * 7;
//     int second = (y * d) + (z * (7-d));
//     cout << max(first , second) << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while(tc --) {
// 	    solve();
//     }
// 	return 0;
// }