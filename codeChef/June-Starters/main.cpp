#include<bits/stdc++.h>
#define ll long long
using namespace std;
// ios_base :: sync_with_stdio(false);
// cin.tie(NULL);

// //////////////////////// chef and query ///////////////////
void solve() {
    int n , q;
    cin >> n >> q;
    ll arr[n];
    vector<int> v;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    while(q--) {
        int num;
        cin >> num;
        if(num == 1) {
            ll l ,r , x;
            cin >> l >> r >> x;
            for(int i = l-1 ; i <= r-1 ; i++) {
                ll add = (x + (i+1) - l);
                arr[i] += (add * add);
            }
        } else if(num == 2) {
            ll y;
            cin >> y;
            cout << arr[y-1] << endl;
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

////////////////////// Sleep Cycle ///////////////////
// void solve() {
//    ll l , h;
//    string s;
//    cin >> l >> h;
//    cin >> s;
//    ll req = h;
//    ll count = 0;
//    for(ll i = 0 ; i < s.length() ;) {
//        if(s[i] == '0') {
//            while((s[i] == '0') && (i < s.length())) {
//                count ++;
//                i++;
//            }
//            if(count >= req) {
//                cout << "YES" << endl;
//                return;
//            } else {
//                if((2*(req-count)) < req)
//                     req = 2 * (req-count);
//                count = 0;
//            }
//        } else {
//            i++;
//        }
     
//    }
//    cout << "NO" << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while(tc--) {
//         solve();
//     }
// }

//////////////////////////// Chess Match /////////////////////
// void solve() {
//     int n , a , b;
//     cin >> n >> a >> b;
//     int timeAfterTen = 2 * (180 + n);
//     int timeLeft = a + b;
//     cout << (timeAfterTen - timeLeft) << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while(tc--) {
//         solve();
//     }
// }

//////////////////////// Correct Submissions //////////////////
// void solve() {
//    int n;
//    cin >> n;
//    unordered_map<string , int> M;
//    string s;
//    int c;
//    for(int i = 0 ; i < 3*n ; i++) {
//        cin >> s >> c;
//        M[s] += c;
//    }
//    vector<int> v;
//    for(auto x : M) {
//        v.push_back(x.second);
//    }
//    sort(v.begin() , v.end());
//    for(auto x: v) {
//        cout << x << " ";
//    }
//    cout << endl;

// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while(tc--) {
//         solve();
//     }
// }

///////////////////// Quadrilateral ////////////////
// void solve() {
//     int a , b , c , d;
//     cin >> a >> b >> c >> d;
//     bool sum1 = ((a + c )== 180);
//     bool sum2 = ((b + d) == 180);
//     if(sum1 && sum2) {
//         cout << "Yes" << "\n";
//     } else {
//         cout << "No" << "\n";
//     }
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     int tc;
//     cin >> tc;
//     while(tc--) {
//         solve();
//     }
// }