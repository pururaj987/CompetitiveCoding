#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    
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

///////////////////// JP Morgan - 1 ////////////////
// string solve(string str) {
//     istringstream ss(str);
//     string word = "";
//     vector<pair<int , string>> v;
//     for (auto x : str) 
//     {
//         if (x == ' ')
//         {
//             v.push_back({word.length() , word});
//             word = "";
//         }
//         else {
//             word = word + x;
//         }
//     }
//     v.push_back({word.length() , word});

//     sort(v.begin() , v.end());
//     for(auto x: v) {
//         if(x.first % 2 == 0) {
//             return x.second;
//         }
//     }
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     cin >> s;
//     solve(s);
// }

/////////////////////////// Sad Split /////////////
// void solve() {
//     string s;
//     cin >> s;
//     int n = s.length();
//     bool isLastEven = false;
//     bool isLastOdd = false;
//     if((s[n-1] - '0') % 2 == 0) {
//         isLastEven = true;
//     } else {
//         isLastOdd = true;
//     }
//     for(int i = 0 ; i < n-1 ; i++) {
//         if((s[i] - '0') % 2 == 0 && isLastEven) {
//             cout << "YES" << endl;
//             return;
//         } else if((s[i] - '0') % 2 != 0 && isLastOdd) {
//             cout << "YES" << endl;
//             return;
//         }
//     }
//     cout << "NO" << endl;
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


////////////////////////// GCD Prefixes /////////////////
// void solve() {
//     int n;
//     cin >> n;
//     vector<ll> bArr(n);
//     vector<ll> aArr(n);
//     for(int i = 0 ; i < n ; i++) {
//         cin >> bArr[i];
//     }
//     ll result = bArr[0];
//     aArr[0] = bArr[0];
//     for(int i = 1 ; i < n ; i++) {
//         aArr[i] = bArr[i];
//         if(aArr[i-1] % bArr[i] != 0) {
//             cout << -1 << endl;
//             return;
//         }
//     }
//     for(auto x : aArr) {
//         cout << x << " ";
//     }
//     cout << endl;
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

////////////////////////// Wildcard Replacement ////////////
// void solve() {
//     string s;
//     cin >> s;
//     stack<char> op;
//     stack<ll> idx;
//     stack<pair<ll , ll>> val;
//     map<pair<int,int> , ll> M;
//     for(ll i = 0 ; i < s.length() ; i++) {
//         if(s[i] == '(') {
//             idx.push(i);
//         } else if(s[i] == '+' || s[i] == '-') {
//             op.push(s[i]);
//         } else if(s[i] == '?') {
//             val.push(make_pair(1 , 0));
//             ll a = i+1;
//             M[make_pair(a ,a)] = 1;
//         } else {
//             char tempOp = op.top();
//             op.pop();
//             pair<ll , ll> b = val.top();
//             val.pop();
//             pair<ll , ll> a = val.top();
//             val.pop();
//             ll max_sum = 0;
//             ll min_sum = 0;
//             if(tempOp == '+') {
//                 max_sum = a.first + b.first;
//                 min_sum = a.second + b.second;
//             } else {
//                 max_sum = a.first - b.second;
//                 min_sum = a.second - b.first;
//             }
//             val.push(make_pair(max_sum , min_sum));
//             ll start = idx.top() + 1;
//             idx.pop();
//             ll end = i + 1;
//             M[make_pair(start , end)] = max_sum;
//         }
//     }
//     ll query = 0;
//     vector<ll> res;
//     cin >> query;
//     for(ll i = 0 ; i < query ; i++) {
//         ll l , r;
//         cin >> l >> r;
//         res.push_back(M[make_pair(l,r)]);
//     }
//     for(auto x : res) {
//         cout << x << " ";
//     }
//     cout << endl;
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


//////////////////////////// XOR Equation ////////////////
// void solve() {
//     ll n;
//     cin >> n;
//     vector<ll> v(n);
//     unordered_map<ll , ll> M;
//     for(ll i = 0 ; i < n ; i++) {
//         cin >> v[i];
//         M[v[i]] ++;
//     }
//     for(auto x : M) {
//         ll y = x.second % 2;
//         M[x.first] = y;
//     }
//     vector<ll> res;
//     for(auto x : M) {
//         if(x.second == 1) {
//             res.push_back(x.first);
//         }
//     }
//     if(res.size() == 1) {
//         ll x = 0 - res[0];
//         if(x < 0) {
//             cout << -1 << endl;
//         } else {
//             cout << x << endl;
//         }
//     } else {
//         ll xorResult = 0;
//         for(auto x : res) {
//             xorResult ^= x;
//         }
//         ll n = res.size();
//         if(xorResult % n == 0) {
//             cout << xorResult/n << endl;
//         } else {
//             cout << -1 << endl;
//         }
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

/////////////////////// Maximise the bridges //////////////
// void solve() {
//     int n , m;
//     cin >> n >> m;
//     int k = n * (n-1);
//     vector<pair<int , int>> v;
//     for(int i = 1 ; i <= n-1 ; i++) {
//         v.push_back(make_pair(i , i+1));
//     }
//     int edgesDone = n-1;
//     if(m == n-1) {
//         for(auto x : v) {
//             cout << x.first << " " << x.second << endl;
//         }
//     } else if(m == k/2) {
//         for(int i = 1 ; i <= n-1 ; i++) {
//             for(int j = i+2 ; j <= n ; j++) {
//                 v.push_back(make_pair(i , j));
//                 edgesDone ++;
//                 if(edgesDone == m) {
//                     for(auto x : v) {
//                         cout << x.first << " " << x.second << endl;
//                     }
//                     return;
//                 }
//             }
//         }
//     } else {
//         for(int i = 3 ; i <= n ; i++) {
//             for(int j = 1 ; j < i-1 ; j++) {
//                 v.push_back(make_pair(i , j));
//                 edgesDone ++;
//                 if(edgesDone == m) {
//                     for(auto x : v) {
//                         cout << x.first << " " << x.second << endl;
//                     }
//                     return;
//                 }
//             }
//         }
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

/////////////////////// Hill Sequence //////////////
// void solve() {
//     int n;
//     cin >> n;
//     vector<ll> v(n);
//     set<ll> s;
//     map<ll , int> M;
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//         s.insert(v[i]);
//         M[v[i]] ++;
//     }
//     if(s.size() == n) {
//         sort(v.begin() , v.end() , greater<ll>());
//         for(auto x : v) {
//             cout << x << " ";
//         }
//         cout << endl;
//     } else {
//         vector<ll> res;
//         for(auto x : M) {
//             if(x.second > 2) {
//                 cout << -1 << endl;
//                 return;
//             }
//         }
//         sort(v.begin() , v.end());
//         if(M[v[n-1]] > 1) {
//             cout << -1 << endl;
//             return;
//         } else {
//             res.push_back(v[0]);
//             M[v[0]] --;
//             for(int i = 1 ; i < n ; i++) {
//                 if(v[i] != v[i-1]) {
//                     M[v[i]] --;
//                     res.push_back(v[i]);
//                 }
//             }
//             for(int i = n-1 ; i>=0 ; i--) {
//                 if(M[v[i]] > 0) {
//                     M[v[i]] --;
//                     res.push_back(v[i]);
//                 }
//             }
//             reverse(res.begin() , res.end());
//             for(auto x : res) {
//                 cout << x << " ";
//             }
//             cout << endl;            
//         }
        
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


/////////////////////// Cheaper Fuel /////////////////
// void solve() {
//     int x , y , a , b , k;
//     cin >> x >> y >> a >> b >> k;
//     int petrol = x + (a*k);
//     int diesel = y + (b*k);
//     if(petrol < diesel) {
//         cout << "PETROL" << endl;
//     } else if(diesel < petrol) {
//         cout << "DIESEL" << endl;
//     } else {
//         cout << "SAME PRICE" << endl;
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


//////////////////////// Nice Pairs ///////////////////
// void solve() {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int res = 0;
//     for(int i = 0 ; i < n ; i++) {
//         // As string contains 1-9 , max(Sj-Si) = 9
//         for(int j = i+1 ; j <= min(i+9 , n-1) ; j++) {
//             if(abs(s[j] - s[i]) == j-i) {
//                 res++;
//             }
//         }
//     }
//     cout << res << endl;
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


//////////////////////// Subtask Problem //////////////////
// void solve() {
//     int n , m , k;
//     cin >> n >> m >> k;
//     vector<int> v(n);
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//     }
//     int oneStreak = 0;
//     if(v[0] == 0) {
//         cout << "0" << endl;
//     } else {
//         for(int i = 0 ; i < n ; i++) {
//             if(v[i] == 1) {
//                 oneStreak ++;
//             } else {
//                 break;
//             }
//         }
//         if(oneStreak == n) {
//             cout << 100 << endl;
//         } else if(oneStreak >= m) {
//             cout << k << endl;
//         } else {
//             cout << "0" << endl;
//         }

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



///////////////////// Infix To Postfix /////////////////
// int prec(char c) {
//     if(c == '^') {
//         return 3;
//     } else if(c == '/' || c == '*') {
//         return 2;
//     } else if(c == '+' || c == '-') {
//         return 1;
//     } else {
//         return -1;
//     }
// }

// void solve() {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     stack<char> st;
//     string result;

//     for(int i = 0 ; i < n ; i++) {
//         char c = s[i];
//         if(c >= 'A' && c <= 'Z') {
//             result += c;
//         } else if(c == '(') {
//             st.push(c);
//         } else if(c == ')') {
//             while(st.top() != '(') {
//                 result += st.top();
//                 st.pop();
//             }
//             st.pop();
//         } else {
//             while(!st.empty() && prec(c) <= prec(st.top())) {
//                 result += st.top();
//                 st.pop();
//             }
//             st.push(c);
//         }
//     }
//     while(!st.empty()) {
//         result += st.top();
//         st.pop();
//     }

//     cout << result << endl;

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


///////////////////// Compilers And Parsers ////////////
// void solve() {
//     string s;
//     cin >> s;
//     ll n = s.length();
//     stack<char> st;
//     ll streak = 0;
//     for(ll i = 0 ; i < n ; i++) {
//         if(s[i] == '<') {
//             st.push(s[i]);
//         } else {
//             if(!st.empty()) {
//                 st.pop();
//                 if(st.empty()) {
//                     streak = i+1;
//                 }
//             } else {
//                 break;
//             }
//         }
//     }
//     cout << streak << endl;

    
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


///////////////////// Stupid Match //////////////////
// void solve() {
//     int n;
//     cin >> n;
//     vector<ll> v(n);
//     ll maxToken = 0;
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//     }
//     int minElementIndex = min_element(v.begin(),v.end()) - v.begin();
//     for(int i = 0 ; i < n ; i++) {
//         if(i <= minElementIndex) {
//             maxToken += v[i];
//         } else {
//             maxToken += v[minElementIndex];
//         }
//     }
//     cout << maxToken << endl;

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

///////////////////// Beautiful Pairs//////////////////
// void solve() {
//     ll n;
//     cin >> n;
//     vector<ll> v(n);
//     map<ll , ll> m;
//     for(ll i = 0 ; i < n ; i++) {
//         cin >> v[i];
//         m[v[i]] ++;
//     }
//     ll ans = 0;
//     for(ll i = 0 ; i < n ; i++) {
//         ans += (n - m[v[i]]);
//     }
//     cout << ans << endl;
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

////////////////////////// Red Alert /////////////
// void solve() {
//     int n , d , h;
//     cin >> n >> d >> h;
//     vector<int> v(n);
//     int waterLevel = 0;
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//     }
//     for(int i = 0 ; i < n ; i++) {
//         if(v[i] > 0) {
//             waterLevel += v[i];
//             if(waterLevel > h) {
//                 cout << "YES" << endl;
//                 return;
//             }
//         } else {
//             waterLevel -= d;
//             if(waterLevel < 0) {
//                 waterLevel = 0;
//             }
//         }
        
//     }

//     cout << "NO" << endl;
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


////////////////////////// Chef And Spells /////////////
// void solve() {
//    int a , b , c;
//    cin >> a >> b >> c;
//    vector<int> v;
//    v.push_back(a);
//    v.push_back(b);
//    v.push_back(c);
//    sort(v.begin() , v.end());
//    cout << v[2] + v[1] << endl;
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


////////////////////////// The Saviors ////////////////
// void solve() {
//    string s;
//    cin >> s;
//    int n = s.length();
//    stack<char> st;
//    for(int i = 0 ; i < n ; i ++) {
//        if(s[i] == '*') {
//            st.push('O');
//            st.push('O');
//        } else {
//            if(!st.empty()) {
//                st.pop();
//            } else {
//                cout << "NO" << endl;
//                return;
//            }
//        }
//    }
//    cout << "YES" << endl;
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

////////////////////////// Chef And Salary Pay ////////////
// void solve() {
//    int x , y;
//    cin >> x >> y;
//    string s;
//    cin >> s;
//    int numberOne = 0;
//    int streak = 0;
//    int currentStreak = 0;
//    for(int i = 0 ; i < s.length() ; i++) {
//        if(s[i] == '0') {
//            streak = max(streak , currentStreak);
//            currentStreak = 0;
//        } else {
//            currentStreak ++;
//            numberOne++;
//        }
//    }
//    streak = max(streak , currentStreak);
//    cout << (numberOne * x) + (streak * y) << endl;
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


////////////////////////// Round Robin Ranks ///////////////
// void solve() {
//     ll n , k;
//     cin >> n >> k;
//     ll rest = 2 * (n-k);
//     ll wins = 0;
//     if(k % 2 == 0) {
//         wins = (k/2)-1;
//     } else {
//         wins = k/2;
//     }
//     cout << 2*wins + rest << endl;
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



////////////////////////// Min Max LCM ////////////////////

// ll gcd(ll a, ll b)
// {
//   if (b == 0)
//     return a;
//   return gcd(b, a % b);
// }
 
// // Function to return LCM of two numbers
// ll lcm(ll a, ll b)
// {
//     return (a / gcd(a, b)) * b;
// }

// void solve() {
//    ll x , k;
//    cin >> x >> k;
//    ll product = x*k;
//    ll min = lcm(x , x+x);
//    ll max = lcm(product-1 , product);
//    cout << min << " " << max << endl; 
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


////////////////////////// Dance Moves ////////////////////
// void solve() {
//     int x , y;
//     cin >> x >> y;
//     if(x < y) {
//         int diff = y - x;
//         if(diff % 2 == 0) {
//         cout << (diff /2) << endl;
//         } else {
//             diff += 1;
//             cout << (diff / 2) + 1 << endl;
//         }
//     } else {
//         int diff = x - y;
//         cout << diff << endl;
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

/////////////////////////// Test Match Series ///////////////
// void solve() {
//     int india = 0;
//     int england = 0;

//     for(int i = 0 ; i < 5 ; i++) {
//         int x;
//         cin >> x;
//         if(x == 1)
//             india++;
//         else if(x == 2)
//             england++;
//     }

//     if(india > england) {
//         cout << "INDIA" << endl;
//     } else if(england > india) {
//         cout << "ENGLAND" << endl;
//     } else {
//         cout << "DRAW" << endl;
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

/////////////////////////// Lucky Number ////////////////////
// void solve() {
//     int a , b , c;
//     cin >> a >> b >> c;
//     if(a == 7 || b == 7 || c == 7) {
//         cout << "YES" << endl;
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

/////////////////////////// Grid Problem ////////////////////
// void solve() {
//     int n;
//     cin >> n;
//     if(n % 2 == 0) {
//         for(int i = 0 ; i < n ; i++) {
//             for(int j = 0 ; j < n ; j++) {
//                 cout << -1 << " ";
//             }
//             cout << endl;
//         }
//     } else {
//         for(int i = 0 ; i < n ; i++) {
//             for(int j = 0 ; j < n ; j++) {
//                 if(i == j) {
//                     cout << -1 << " ";
//                 } else {
//                     cout << 1 << " ";
//                 }
//             }
//             cout << endl;
//         }
//     }
//     cout << endl;
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

/////////////////////////// Obtain the Sum //////////////////
// void solve() {
//     ll n , s;
//     cin >> n >> s;
//     ll sum = (n * (n+1)) / 2;
//     ll req = sum - s;
//     if(req >= 1 && req <= n) {
//         cout << req << endl;
//     } else {
//         cout << -1 << endl;
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


/////////////////////////// Two Dishes //////////////////////
// void solve() {
//     int n , s;
//     cin >> n >> s;
//     int t1 = s;
//     int t2 = 0;
//     int maxDiff = 0;
//     while(t1 >= 0 && t2 >= 0) {
//         if(t1 <= n && t2 <= n) {
//             maxDiff = max(maxDiff , abs(t1 - t2));
//         }
//         t1 -= 1;
//         t2 += 1;
//     }
//     cout << maxDiff << endl;
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

/////////////////////////// Find the direction //////////////
// void solve() {
//     int x;
//     cin >> x;
//     string cur_dir = "North";
//     while(x--) {
//         if(cur_dir == "North")
//             cur_dir = "East";
//         else if(cur_dir == "East")
//             cur_dir = "South";
//         else if(cur_dir == "South")
//             cur_dir = "West";
//         else if(cur_dir == "West")
//             cur_dir = "North";
//     }
//     cout << cur_dir << endl; 
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

/////////////////////////// Maximize Subsequence ////////////////
// void solve() {
//     int n , k;
//     cin >> n >> k;
//     vector<int> v(n);
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//     }

//     sort(v.begin() , v.end());

//     int count = 0;
//     int sum = 0;
//     for(int i = 0 ; i < n ; i++) {
//         if(v[i] < 0 && count < k) {
//             sum += abs(v[i]);
//             count++;
//         } else if(v[i] > 0) {
//             sum += v[i];
//         }
//     }

//     cout << sum << endl;
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

//////////////////////////// Lead Game /////////////////////
// void solve() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     int sum = 0;
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//     }
//     for(int i = 0 ; i < n ; i+=2) {
//         sum += v[i];
//     }
//     cout << sum << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();
// 	return 0;
// }

//////////////////////////// Lead Game /////////////////////
// void solve() {
//     int n;
//     cin >> n;
//     int player1 = 0;
//     int player2 = 0;
//     vector<pair<int , string>> v(n);
//     for(int i = 0 ; i < n ; i++) {
//         int a , b;
//         cin >> a >> b;
//         player1 += a;
//         player2 += b;
//         if(player1 - player2 > 0) {
//             v.push_back(make_pair(player1-player2 , "1"));
//         } else {
//             v.push_back(make_pair(player2-player1 , "2"));
//         }
//     }
//     sort(v.begin() , v.end());
//     cout << v[n-1].second << " " << v[n-1].first << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();
// 	return 0;
// }
/////////////////////////// College Life ///////////////////
// void solve() {
//     int n , m;
//     cin >> n >> m;
//     vector<ll> f(n);
//     vector<ll> c(m);
//     vector<pair<ll , string>> combined;
//     for(int i = 0 ; i < n ; i++) {
//         cin >> f[i];
//         combined.push_back(make_pair(f[i] , "football"));
//     }
//     for(int i = 0 ; i < m ; i++) {
//         cin >> c[i];
//         combined.push_back(make_pair(c[i] , "cricket"));
//     }
//     sort(combined.begin() , combined.end());
//     string current = "football";
//     int switchTime = 0;
//     for(int i = 0 ; i < combined.size() ; i++) {
//        if(combined[i].second != current) {
//            switchTime ++;
//            current = combined[i].second;
//        }
//     }
    
//     cout << switchTime << endl;

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

/////////////////////////// Nobel Prize ////////////////////
// void solve() {
//     int n , m;
//     cin >> n >> m;
//     vector<int> v (n);
//     set<int> s;
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//         s.insert(v[i]);
//     }
//     if(s.size() < m) {
//         cout << "YES" << endl;
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
// 	    solve();
//     }
// 	return 0;
// }


/////////////////////////// Penalty Shootout //////////////////////
// void solve() {
//     int n;
//     string s;
//     cin >> n;
//     cin >> s;
//     int totalShots = 0;
//     int shotA = 0;
//     int shotB = 0;
//     int scoreA = 0;
//     int scoreB = 0;
//     for(int i = 0 ; i < 2*n ; i++) {
//         if(i == 0 || i%2 == 0) {
//             shotA ++;
//             totalShots ++;
//             scoreA += (s[i] == '0' ? 0 : 1);
//         } else if (i == 1 || i%2 != 0) {
//             shotB ++;
//             totalShots ++;
//             scoreB += (s[i] == '0' ? 0 : 1);
//         }
//         if(scoreA > scoreB) {
//             int remainingShots = n - shotB;
//             if((scoreB + remainingShots*1) < scoreA) {
//                 cout << totalShots << endl;
//                 return;
//             }
//         } else if(scoreB > scoreA) {
//             int remainingShots = n - shotA;
//             if((scoreA + remainingShots*1) < scoreB) {
//                 cout << totalShots << endl;
//                 return;
//             }
//         }
//     }
//     cout << totalShots << endl;
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

/////////////////////////// Chef And Street Food ///////////////////
// void solve() {
//     int n;
//     cin >> n;
//     int maxProfit = 0;
//     int s , p , v;
//     for(int i = 0 ; i < n ; i++) {
//         int profit = 0;
//         cin >> s >> p >> v;
//         s += 1;
//         if(p % s == 0) {
//             profit = (p/s) * v;
//         } else {
//             profit = (floor(p/s) * v);
//         }
//         if(profit > maxProfit) {
//             maxProfit = profit;
//         }
//     }
//     cout << maxProfit << endl;
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


//////////////////////////// Narcisstic ////////////////
// void solve() {
//     int n;
//     cin >> n;
//     string num = to_string(n);
//     int len = num.length();
//     int sum = 0;
//     while(n != 0) {
//         int dig = n % 10;
//         sum += (int)(pow(dig , len) + 0.5);
//         n = n / 10;
//     }
//     cout << sum << " " << n << endl;
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


////////////////////// KCON //////////////////
// void solve() {
//    int n , k;
//    cin >> n >> k;
//    vector<ll> v(n);
//    for(int i = 0 ; i < n ; i++) {
//        cin >> v[i];
//     }
//     vector<ll> arr;
//     int j = 0;
//     for(int i = 0 ; i < (k*n) ; i++) {
//         arr.push_back(v[j]);
//         j++;
//         if(j == n) {
//             j = 0;
//         }
//     }
//     ll max = INT_MIN;
//     ll maxEndingHere = 0;
//     for(int i = 0 ; i < k*n ; i++) {
//         maxEndingHere += arr[i];
//         if(maxEndingHere > max) {
//             max = maxEndingHere;
//         }
//         if(maxEndingHere < 0) {
//             maxEndingHere = 0;
//         }
//     }
//     cout << max << endl;

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


////////////////////// Factorial /////////////////
// void solve() {
//    ll n;
//    cin >> n;
//    ll count = 0;
//    for(ll i = 5 ; (n/i)>=1 ; i*=5) {
//        count += (n/i);
//    }
//    cout << count << endl;
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

////////////////////// Multiple OF 3 /////////////////////
// void solve() {
//     ll k;
//     int d0 , d1;
//     cin >> k >> d0 >> d1;
//     if((d0 + d1) % 3 == 0) {
//         cout << "YES" << endl;
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
// 	    solve();
//     }
// 	return 0;
// }

////////////////////// Laddus /////////////////
// void solve() {
//     int activity;
//     string national;
//     cin >> activity >> national;
//     int laddus = 0;
//     for(int i = 0 ; i < activity ; i++) {
//         string s;
//         cin >> s;
//         if(s == "CONTEST_WON") {
//             int rank;
//             cin >> rank;
//             laddus += 300;
//             if(rank <= 20 ) {
//                 laddus += (20 - rank);
//             }
//         } else if (s == "TOP_CONTRIBUTOR") {
//             laddus += 300;
//         } else if (s == "BUG_FOUND") {
//             int bounty;
//             cin >> bounty;
//             laddus += bounty;
//         } else if (s == "CONTEST_HOSTED") {
//             laddus += 50;
//         }
//     }
//     cout << (national == "INDIAN" ? laddus/200 : laddus/400) << endl;
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

////////////////////// Carvans ////////////////////
// void solve() {
//     ll n;
//     cin >> n;
//     vector<ll> v(n);
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//     }
//     ll count = 0;
//     if(n == 1) {
//         cout << 1 << endl;
//     } else {
//         count += 1;
//         for(int i = 1 ; i < n ; i++) {
//             if(v[i] < v[i-1]) {
//                 count++;
//             } else {
//                 v[i] = v[i-1];
//             }
//         }
//         cout << count << endl;
//     }
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

////////////////////// Smart Phone //////////////////
// void solve() {
//    int n;
//    cin >> n;
//    vector<ll> v(n);
//    for(int i = 0 ; i < n ; i++) {
//        cin >> v[i];
//    }
//    sort(v.begin() , v.end());
//    ll max = 0;
//    for(int i = 0 ; i < n ; i++) {
//        ll rev = v[i] * (n-i); 
//        if(rev > max){
//            max = rev;
//        }
//    }
//    cout << max << endl;

// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
// 	solve();
// 	return 0;
// }

////////////////////// Lapindromes ///////////////
// void solve() {
//     string s;
//     cin >> s;
//     int len = s.length();
//     string s1 , s2;
//     if(len % 2 == 0) {
//         int half = (len/2)-1;
//         for(int i = 0 ; i < len ; i++) {
//             if(i <= half) {
//                 s1 += s[i];
//             } else {
//                 s2 += s[i];
//             }
//         }
//     } else {
//         int half = ((len+1)/2) - 1;
//         for(int i = 0 ; i < len ; i++) {
//             if(i != half) {
//                 if(i < half) {
//                     s1 += s[i];
//                 } else {
//                     s2 += s[i];
//                 }
//             }
//         }
//     }
//     sort(s1.begin() , s1.end());
//     sort(s2.begin() , s2.end());
//     if(s1 == s2) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }

// int main() {
// 	int tc;
// 	cin >> tc;
// 	while(tc --) {
// 	    solve(); 
//     }
// 	return 0;
// }


///////////////////// Reverse /////////////////////
// void solve() {
//         string s;
// 	    cin >> s;
// 	    reverse(s.begin() , s.end());
//         stringstream num(s);
//         ll x = 0;
//         num >> x;
// 	    cout << x << endl;
// }

// int main() {
// 	int tc;
// 	cin >> tc;
// 	while(tc --) {
// 	    solve(); 
//     }
// 	return 0;
// }

////////////////////// Wave //////////////////////
// int countGreater(vector<ll> &v , int n , ll k) {
//     int l = 0;
//     int r = n-1;
//     int leftGreat = n;
//     while(l <= r) {
//         int m = l + (r-l) / 2;
//         if(v[m] > k) {
//             leftGreat = m;
//             r = m-1;
//         } else {
//             l = m + 1;
//         }
//     }
//     return (n - leftGreat);
// }
// void solve() {
//     int n , q;
//     cin >> n >> q;
//     vector<ll> v(n);
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//     }
//     sort(v.begin() , v.end());
//     for(int i = 0 ; i < q ; i++) {
//         ll x;
//         cin >> x;
//         if(find(v.begin() , v.end() , x) != v.end()) {
//             cout << 0 << endl;
//             return;
//         }
//         int countNeg = countGreater(v , v.size() , x);
//         if(countNeg % 2 == 0) {
//             cout << "POSITIVE" << endl;
//         } else {
//             cout << "NEGATIVE" << endl;
//         }
//     }
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
    
//     solve();
// }

///////////////////// chef And Feedback //////////////
// void solve() {
//     string s;
//     cin >> s;
//     string s1 = "010";
//     string s2 = "101";
//     if((s.find(s1) != string::npos) || (s.find(s2) != string::npos)) {
//         cout << "Good" << endl;
//     } else {
//         cout << "Bad" << endl;
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
// }

//////////////////// Max Weight Difference ///////////////////
// void solve() {
//     int n , k;
//     cin >> n >> k;
//     vector<int> v(n);
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//     }
//     k = min(k , n-k);
//     sort(v.begin() , v.end());
//     int count = 0;
//     ll sum1 = 0;
//     for(int i = 0 ; i < n ; i++) {
//         sum1 += v[i];
//         count ++;
//         if(count == k) {
//             break;
//         }
//     }
//     ll sum2 = accumulate(v.begin() , v.end() , 0) - sum1;
//     cout << sum2 - sum1 << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }

////////////////////// False Number ///////////////////
// void solve() {
//     string s;
//     cin >> s;
//     string newString;
//     if(s[0] == '1') {
//         newString += '1';
//         newString += '0';
//         for(int i = 1 ; i < s.length() ;i++) {
//             newString += s[i];
//         }
//     } else {
//         newString += '1';
//         for(int i = 0 ; i < s.length() ;i++) {
//             newString += s[i];
//         }
//     }
//     cout << newString << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }


//////////////////// HTML TAGS ////////////////////////
// void solve() {
//     string s;
//     cin >> s;
//     bool checkStart = ((s[0] == '<') && (s[1] == '/'));
//     bool checkEnd = (s[s.length() - 1] == '>');
//     bool checkBody = (checkStart && checkEnd && (s.length() > 3));
//     if(checkStart && checkEnd && checkBody) {
//         for(int i = 2 ; i < (s.length()-1) ;i++) {
//             bool checkChar = (islower(s[i]) || isdigit(s[i]));
//             if(!checkChar) {
//                 cout << "Error" << endl;
//                 return;
//             }
//         }
//         cout << "Success" << endl;
//     } else {
//         cout << "Error" << endl;
//     }
// }

// int main() {
// ios_base :: sync_with_stdio(false);
// cin.tie(NULL);
    
//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }

////////////////////////// BALLOON ////////////////////
// void solve() {
//     int n;
//     cin >> n;
//     int arr[n];
//     int count = 0;
//     int numCount = 0;
//     for(int i = 0 ; i < n ; i++) {
//         cin >> arr[i]; 
//     }

//     for(int i = 0 ; i < n ; i++) {
//         if(arr[i] >= 1 && arr[i] <= 7) {
//             numCount ++;
//         }
//         count ++;
//         if(numCount == 7) {
//             cout << count << endl;
//             return;
//         }
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
// }



//////////////////////// Find Duplicate //////////////////
// void solve() {
//     int n;
//     cin >> n;
//     int arr[n];
//     int count = 0;
//     for(int i = 0 ; i < n ; i++)
//         cin >> arr[i];
//     for(int i = 0 ; i < n ;) {
//         // Use maps
//     }

//     cout << count << endl;

// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
//     solve();
// }

////////////////////// Subset with max sum //////////////////////
// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;
//     ll arr[n];
//     ll sum = 0;
//     ll count = 0;
//     bool neg = true;
//     for(int i = 0 ; i < n ; i++) {
//         cin >> arr[i];
//         if(arr[i] >= 0) {
//             neg = false;
//             break;
//         }
//     }

//     if(neg) {
//         cout << *max_element(arr , arr + n) << " " << 1 << endl;
//     } else {
//         for(int i = 0 ; i < n ; i++) {
//             if(arr[i] >= 0) {
//                 sum += arr[i];
//                 count ++;
//             }
//         }
//         cout << sum << " " << count << endl;
//     } 
    
// }

//////////////////////////// Chef And Notebooks //////////////
// void solve() {
//     ll x , y , k , n;
//     cin >> x >> y >> k >> n;
//     ll diff = x - y;
//     bool buy = false;
//     for(ll i = 0 ; i < n ; i++) {
//         ll p , c;
//         cin >> p >> c;
//         if((p >= diff) && (c <= k)) {
//             buy = true;
//         }
//     }
//     if(buy)
//         cout << "LuckyChef" << endl;
//     else
//         cout << "UnluckyChef" << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
    
//     ll tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }

////////////////////////// Coin Flip /////////////////////
// void solve() {
//     int g;
//     cin >> g;
//     for(int i = 0 ; i < g ; i++) {
//         int n , I , q;
//         cin >> I >> n >> q;
//         if(n % 2 == 0 || I == q)
//             cout << n/2 << endl;
//         else
//             cout << n/2 + 1 << endl;
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
// }

////////////////////////// Uncle Johnny //////////////////
// void solve() {
//   int n;
//   cin >> n;
//   vector<ll> v(n);
//   for(int i = 0 ; i < n ; i++)
//         cin >> v[i];
//     int k;
//     cin >> k;
//     ll uncle = v[k-1];
//     sort(v.begin() , v.end());
//     auto it = find(v.begin() , v.end() , uncle);
//     cout << (it - v.begin()) + 1 << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }

///////////////////////// Racing Horses //////////////////
// void solve() {
//    int n;
//    cin >> n;
//    vector<ll> v(n);
//    for(int i = 0 ; i < n ; i++)
//         cin >> v[i];
//     sort(v.begin() , v.end());
//     ll min = v[1] - v[0];
//     for(int i = 2 ; i < n ; i++) {
//         if((v[i] - v[i-1]) < min)
//             min = v[i] - v[i-1];
//     }
//     cout << min << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }

//////////////////////// Ceil and A - b Problem /////////////
// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int a , b;
//     cin >> a >> b;
//     int diff = a - b;
//     string diffStr = to_string(diff);
//     diffStr[0] = (diffStr[0] == '2' ? '3' : '2');
//     cout << diffStr << endl;
// }


//////////////////////// Jewels And Stones //////////////

// void solve() {
//     string jewel;
//     string stone;
//     cin >> jewel;
//     cin >> stone;
//     int count = 0;
//     for(int i = 0 ; i < stone.length() ; i++) {
//         if(jewel.find(stone[i]) != string::npos)
//             count ++;
//     }
//     cout << count << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int tc;
//     cin >> tc;
//     while(tc --) {
//         solve();
//     }
// }
