#include<bits/stdc++.h>
using namespace std;

/////////////// Array Rotation ///////////////
// int main() {
//     int n;
//     const unsigned int M = 1000000007;
//     cin >> n;
//     int sum = 0;
//     for(int i = 0 ; i < n ; i++) {
//         int item;
//         cin >> item;
//         sum = (sum + item + M) % M;
//     }
//     int q;
//     cin >> q;
//     for(int i = 0 ; i < q ; i++) {
//         sum = (sum * 2)%M;
//         cout << sum << endl;      
//     }
// }

////////////// PLAGIARISM ///////////////
// int main() {
//     int testCase;
//     cin >> testCase;
//     while(testCase --) {
//         int n , m , k;
//         cin >> n >> m >> k;
//         int disqualify = 0;
//         map<int,int> M;
//         for(int i = 0 ; i < k ; i++) {
//             int num;
//             cin >> num;
//             if(num >= 1 && num <= n ) {
//                 if(M.find(num) == M.end())
//                     M[num] = 1;
//                 else
//                     M[num] ++;
//             }
//         }
//         if(k == 1) {
//             cout << 0 << endl;
//         } else {
//             for(auto&it : M) {
//                 if(it.second > 1)
//                     disqualify ++;
//             }
//             cout << disqualify << " ";
//             for(auto&it : M) {
//                 if(it.second > 1)
//                     cout << it.first << " ";
//             }
//             cout << endl;
//         }
//     }
// }

// //////////// Corrrect Sentence ////////////
// int main() {
//     int testCase = 0;
//     cin >> testCase;
//     while(testCase --) {
//         int k;
//         cin >> k;
//         bool ans = true;
//         string s;
//         for(int i = 0 ; i < k ; i++) {
//             cin >> s;
//             if(ans) {
//                 bool first = false, second = false;
//                 for(auto c : s) {
//                     if(c >= 'a' && c <='m')
//                         first = true;
//                     else if (c >= 'N' && c <='Z')
//                         second = true;
//                     else
//                         ans = false; 
//                 }
//                 if(first && second)
//                     ans = false;
//             }
//         }
//         cout << (ans ? "YES" : "NO") << endl;
//     }
// }


//////////////// MINIMUM POPPING //////////////////
// int main() {
//     int testCase = 0;
//     cin >> testCase;
//     for(int i = 0 ; i < testCase ; i++) {
//         int n = 0 , m = 0;
//         cin >> n >> m;
//         int arr [m];
//         unordered_map<int , int> last_ind;
//         for(int j = 0 ; j < m ; j++) {
//             cin >> arr[j];
//             last_ind[arr[j]] = j;
//         }
//         set <int> st;
//         for(auto x : last_ind)
//             st.insert(x.second);
//         int ans = m - *st.begin();
//         for(int j = 0 ; j < m ; j++) {
//             if(st.count(last_ind[arr[j]]))
//                 st.erase(last_ind[arr[j]]);
//             if(!st.empty())
//                 ans = min(ans , j + 1 + m - *st.begin());
//             else
//                 ans = min(ans , j+1);
//         }
//         cout << ans << endl;
        
//     }
// }

////// Cheating Time /////////////
// int main() {
//     int testCase = 0;
//     cin >> testCase;
//     for(int i = 0 ; i < testCase ; i++) {
//         int n = 0;
//         long long int k = 0 , f = 0;
//         cin >> n >> k >> f;
//         vector<pair<long long int,long long int>> inv(n);
//         for(int j = 0 ; j < n ; j++) {
//             cin >> inv[j].first >> inv[j].second;
//         }
//         sort(inv.begin() , inv.end());
//         long long int timeCheated = 0;
//         long long int max_end = inv[0].second;
//         for(int j = 1 ; j < n ; j++) {
//             if(inv[j].first - max_end > 0) {
//                 timeCheated += (inv[j].first - max_end);
//             }
//             max_end = max(max_end , inv[j].second);
//         }
//         timeCheated += (inv[0].first);
//         timeCheated += (f - max_end);
//         cout << (timeCheated >= k ? "YES" : "NO") << endl;
//     }
//     return 0;
// }












///////////////////// LAZY CHEF //////////////
// int main() {
//     int testCase = 0;
//     cin >> testCase;
//     for(int i = 0 ; i < testCase ; i++) {
//         int x = 0 , m = 0 , d = 0;
//         cin >> x >> m >> d;
//         int time1 = m * x;
//         int time2 = x + d;
//         if(time1 < time2)
//             cout << time1 << endl;
//         else
//             cout << time2 << endl;
//     }
// }

