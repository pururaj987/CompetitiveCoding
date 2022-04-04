#include <bits/stdc++.h>
using namespace std;

////////////////////// NUMCOMP /////////////////
const int MAX = 1e7 + 10;
vector<int> prime(MAX , true);
vector<long long int> prefix_prime(MAX);

void sieve() {
    prime[0] = prime[1] = false;
    for(long long int i = 2 ; i * i < MAX ; i++) {
        if(prime[i]) {
            for(long long int j = i * i ; j <= MAX ; j+=i)
                prime[j] = false;
        }
    }
}

void pre() {
    long long int countPrime = 0;
    for(long long int i = 1 ; i <= MAX ; i++) {
        if(prime[i])
            countPrime ++;
        prefix_prime[i] = countPrime;
    }
}

int main() {
    sieve();
    pre();

    int tc;
    cin >> tc;
    while(tc --) {
        int n;
        cin >> n;
        if(n == 2) {
            cout << 1 << endl;
        } else if(n == 3) {
            cout << 2 << endl;
        } else {
            int lim = n / 2;
            long long int extra = prefix_prime[n] - prefix_prime[lim];
            long long int groups = 1 + extra;
            cout << groups << endl;
        }
    }
}

////////////// Bench Presss ///////////////
// void solve() {
//     long long int n , W , rod = 0;
//     cin >> n >> W >> rod;
//     vector<long long int> weight(n);
//     unordered_map<long long int,long long int> M;
//     for(long long int i = 0 ; i < n ; i++) {
//         cin >> weight[i];
//         if(M.find(weight[i]) == M.end())
//             M[weight[i]] = 1;
//         else
//             M[weight[i]] ++;
//     }
//     if(rod >= W) {
//         cout << "YES" << endl;
//         return;
//     }
//     long long int weight2 = 0;
//     for(auto &it : M) {
//         if(it.second % 2 == 0) {
//             weight2 += (it.second * it.first);
//         } else {
//             weight2 += ((it.second - 1) * it.first);
//         }
//     }
//     cout << ((weight2 + rod) >= W ? "YES" : "NO") << endl;
// }

// int main() {
//     int TC;
//     cin >> TC;
//     while(TC --) {
//         solve();
//     }
// }

///////////// Tom And Jerry ////////////
// void solve() {
//   int a , b , c , d , k;
//   cin >> a >> b >> c >> d >> k;
//   int moves = abs(c-a) + abs(d-b);
//   if(moves == k) {
//       cout << "YES" << endl;
//   } else if (moves < k) {
//       if((k-moves) % 2 == 0) {
//           cout << "YES" << endl;
//       } else {
//           cout << "NO" << endl;
//       }
//   } else {
//       cout << "NO" << endl;
//   }
// }

// int main() {
//     int TC;
//     cin >> TC;
//     while(TC --) {
//         solve();
//     }
// }

///////////////// Charges ///////////////
// void solve() {
//    int n , k;
//    cin >> n >> k;
//    string s;
//    cin >> s;
//    int distance = 0;
//    for(int i = 0 ; i < s.length()-1 ; i++) {
//        if(s[i] == s[i+1])
//         distance += 2;
//         else
//         distance += 1;
//     }
//    for(int i = 0 ; i < k ; i++) {
//        int x;
//        cin >> x;
//        int givenIndex = x-1;
//        int givenElement = s[givenIndex];
//        int right = s[givenIndex + 1];
//        int left = s[givenIndex -1];
//        if(right) {
//            if(givenElement == right)
//             distance -= 2;
//             else
//             distance -= 1;
//        }
//        if(left) {
//             if(givenElement == left)
//             distance -= 2;
//             else
//             distance -= 1;
//        }
//        s[x-1] = (s[x-1] == '0' ? '1' : '0');
//         givenElement = s[givenIndex];
//         right = s[givenIndex + 1];
//         left = s[givenIndex -1];
//        if(right) {
//            if(givenElement == right)
//             distance += 2;
//             else
//             distance += 1;
//        }
//        if(left) {
//             if(givenElement == left)
//             distance += 2;
//             else
//             distance += 1;
//        }
//        cout << distance << endl;
//     }
// }

// int main() {
//     int TC;
//     cin >> TC;
//     while(TC --) {
//         solve();
//     }
// }

//////////// bIRTHDAY GIFTS /////////
// void solve() {
//     int n , k;
//     cin >> n >> k;
//     vector<long long int> gift(n);
//     for(int i = 0 ; i < n ; i++)
//         cin >> gift[i];
//     sort(gift.begin() , gift.end());
//     long long int scoreChef = 0 , scoreTwin = 0;
//     for(int i = 1 ; i <= 2*k ; i++) {
//         if(i % 2 != 0) {
//             scoreChef += gift[gift.size() - 1];
//             gift.pop_back();
//         } else {
//             if(i == 2*k) {
//                 scoreTwin += gift[gift.size() - 1];
//                 gift.pop_back();
//                 scoreTwin += gift[gift.size() - 1];
//                 gift.pop_back();
//             } else {
//                 scoreTwin += gift[gift.size() - 1];
//                 gift.pop_back();
//             }
//         }
//     }
//     if(scoreChef > scoreTwin)
//         cout << scoreChef << endl;
//     else
//         cout << scoreTwin << endl;
// }

// int main() {
//     int TC;
//     cin >> TC;
//     while(TC --) {
//         solve();
//     }
// }

/////////////////// HOOPS /////////////
// void solve() {
//     int n;
//     cin >> n;
//     int mid = ((n-1)/2) + 1;
//     cout << mid << endl;
// }

// int main() {
//     int TC;
//     cin >> TC;
//     while(TC --) {
//         solve();
//     }
// }