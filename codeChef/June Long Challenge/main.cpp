#include<bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;
#define ll long long 

///////////////// Short Route ///////////////////
ll shortestTime(vector<int> &train , ll *n , ll *elem) {
    ll l = 0 , r = 0 , shortestTime = 0;
    l = *elem - 1;
    if((*elem + 1) <= *n)
        r  = *elem + 1;
    while(l >= 1 || r <= *n) {
        if((l != 0 && (train[l] == 1)) || (r != 0 && (train[r] == 2))) {
            shortestTime = (l>=1 ? (*elem-l) : (r - *elem)); 
            return shortestTime;
        }
        l -= 1;
        r += 1;
    }
    return -1;
}

void solve() {
    // Input ////////
    ll n , m;
    scanf("%lld %lld" , &n , &m);
    vector<int> train(n);
    vector<ll> travel(m);
    for(ll i = 1 ; i <= n ; i++) {
        cin >> train[i];
    }
    for(ll i = 1 ; i <= m ; i++) {
        cin >> travel[i];
    }

    // Main Code ///////////
    for(ll i = 1 ; i <= m ; i++) {
        if(travel[i] == 1)
            cout << 0 << "\n";
        else
            cout << shortestTime(train , &n , &travel[i]) << " ";
    }
    printf("\n");
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

////////////////// bitwise Tuple /////////////////

// void solve() {
//     ll  n , m;
//     cin >> n >> m;

//     // Calcualting 2^n
//     ll ans = 1;
//     ll base = 2;
//     while(n > 0) {
//         if(n % 2)
//             ans = (ans * base) % M;
//         base = (base * base) % M;
//         // Doing n / 2
//         n /= 2;
//     }
//     // Calculating (2^n - 1)^m
//     base = ans - 1;
//     ans = 1;
//     while(m > 0) {
//         if(m % 2)
//             ans = (ans * base) % M;
//         base = (base * base) % M;
//         m /= 2;
//     }
//     cout << ans << endl;
// }

// int main() {
//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }


////////////////// Bella Ciao ///////////////
// void solve() {
//         long long int D , d , P , Q;
//         cin>>D>>d>>P>>Q;
//         long long int res;
//         res = D*P + (D/d)*(D/d-1)*(Q*d)/2 + (D/d)*Q*(D%d);
//         cout<<res << endl;
// }

// int main() {
//     int tc;
//     scanf("%d" , &tc);
//     while(tc --) {
//         solve();
//     }
// }

//D = 14 , d = 3; , (14/3 = 4) , (14/3 - 1 = 3) , 4*3*(Q*3) / 2
// P P P P+Q P+Q P+Q P+2Q P+2Q P+2Q P+3Q P+3Q P+3Q P+4Q P+4Q 

//////////////// Summer Heat //////////////
// void solve() {
//     int xa , xb ,  Xa , Xb;
//     cin >> xa >> xb >> Xa >> Xb;
//     cout << (Xa / xa) + (Xb / xb) << endl;
// }

// int main() {
//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }