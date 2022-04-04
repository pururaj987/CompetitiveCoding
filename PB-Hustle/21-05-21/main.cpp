#include<bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////// MAX STAR VALUE //////////////////////////////////////
// int main() {
//     int testCase = 0;
//     cin >> testCase;
//     for(int i = 0 ; i < testCase ; i++) {
//         int starValue = 0;
//         int n = 0;
//         cin >> n;
//         vector<long long int> arr;
//         for(int j = 0 ; j < n ; j++)
//             cin >> arr[j];
//         for(int j = 1 ; j < n ; j++) {
//             int result = 0;
//             for(int k = j-1 ; k >=0 ; k--) {
//                 if((arr[k] >= arr[j]) && (arr[k] % arr[j] == 0))
//                     result ++;
//             }
//             if(result > starValue)
//                 starValue = result;
//         }
//         cout << starValue << endl;
//     }
// }

///////////////////////////////////// PHONE PRICES ////////////////////////////////
bool condition(vector<int> arr , int j) {
    int m = 0;
    for(int k = j-1 ; k >=0 && m<5  ; k--) {
        if(arr[k] < arr[j]) {
            return false;
        }
        m++;
    }
    return true;
    
}
int main() {
    int testCase = 0;
    cin >> testCase;
    for(int i = 0 ; i < testCase ; i++) {
        int goodDay = 0;
        int n = 0;
        cin >> n;
        vector<int> arr;
        for(int j = 0 ; j < n ; j++) {
            int item = 0;
            cin >> item;
            arr.push_back(item);
        }
        for(int j = 0 ; j < n ; j++) {
            if(condition(arr , j))
                goodDay ++;
        }
        cout << goodDay << endl;
    }
    return 0;
}