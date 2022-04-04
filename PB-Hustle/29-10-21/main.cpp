#include<bits/stdc++.h>
#define ll long long
using namespace std;
// ios_base :: sync_with_stdio(false);
// cin.tie(NULL);

///////////////////////// Restaurant ///////////////
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve() {
    vector<pair<int , int>> v(5);
    for(int i = 0 ; i < 5 ; i++) {
        cin >> v[i].first;
        v[i].second = 0;
    }
    for(int i = 0 ; i < 5 ; i++) {
        if(v[i].first % 10) {
            int near = v[i].first + (10 - v[i].first%10);
            v[i].second = near - v[i].first;
        }
    }
    sort(v.begin() , v.end() , sortbysec);
    int totalTime = 0;
    for(int i = 0 ; i < 5 ; i++) {
        if(v[i].second == 0) {
            totalTime += v[i].first;
        }
    }
    for(int i = 0 ; i < 5 ; i++) {
        if(v[i].second != 0) {
            totalTime += v[i].first;
            if(totalTime % 10 && i != 4) {
                int neartotal = totalTime + (10 - totalTime%10);
                totalTime += (neartotal - totalTime);
            }
        }
    }

    cout << totalTime << endl;

}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    solve();

	return 0;
}


//////////////////// Plox ///////////////////
// void solve() {
//     int n;
//     cin >> n;
//     vector<ll> v(n);
//     for(int i = 0 ; i < n ; i++) {
//         cin >> v[i];
//     }
//     if(n == 1) {
//         cout << "Yes" << endl;
//     } else {
//         for(int i = n-1 ; i >=1 ; i--) {
//             if(v[i-1] > v[i]) {
//                 v[i-1] --;
//             }
//         }
//         for(int i = 0 ; i < n-1 ; i++) {
//             if(v[i] > v[i+1]) {
//                 cout << "No" << endl;
//                 return;
//             }
//         }
//         cout << "Yes" << endl;
//     }
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();

// 	return 0;
// }


////////////////////// String //////////////

// void solve() {
//     string s;
//     cin >> s;
//     int len = 0;
//     string res = "";
//     int maxLen = 0;
//     for(int i = 0 ; i < s.length() ; i++) {
//        if((s[i] == 'A' || s[i] == 'G' || s[i] == 'C' || s[i] == 'T')) {
//            res += s[i];
//        } else {
//            int n = res.length();
//            maxLen = max(maxLen , n);
//            res = "";
//         }
//     }
//     int n = res.length();
//     maxLen = max(maxLen , n);
//     cout << maxLen << endl;

// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();

// 	return 0;
// }



//////////////// deempu_orz ////////////////
// void solve() {
//     int a, b;
//     cin >> a >> b;
//     vector<int> v;
//     v.push_back(a + (a-1));
//     v.push_back(b + (b-1));
//     v.push_back(a + b);
//     sort(v.begin() , v.end());
//     cout << v[2] << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();

// 	return 0;
// }



//////////////////// Late nhi honeka ///////////////////////////
// void solve() {
//     vector<int> v(6);
//     int k;
//     for(int i = 0 ; i < 6 ; i++) {
//         cin >> v[i];
//     }
//     for(int i = 0 ; i < 4; i++) {
//         for(int j = i+1 ; j < 5 ; j++) {
//             if((v[j] - v[i]) > v[5]) {
//                 cout << ":(" << endl;
//                 return;
//             }
//         }
//     }
//     cout << "Yay!" << endl;
// }

// int main() {
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     solve();

// 	return 0;
// }

