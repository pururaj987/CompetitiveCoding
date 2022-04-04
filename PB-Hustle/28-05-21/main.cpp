#include<bits/stdc++.h>
using namespace std;

/////////////////////// CANDY DIVISION /////////////////
// int main() {
//     int TC;
//     cin >> TC;
//     while(TC --) {
//         int n;
//         cin >> n;
//         int a = 0 , b = 0;
//         while(n --) {
//             int z;
//             cin >> z;
//             (z == 1 ? a++ : b++);
//         }
//         cout << ((a%2 || (b%2 && a<2)) ? "NO" : "YES") << endl;
//     }
// }

///////////////////// MATRIX PROBLEM ////////////////////
// int main() {
//     int moves = 0;
//     int matrix[5][5];
//     int rowOne = 0;
//     int columnOne = 0;
//     for(int i = 0 ; i <5 ; i++) {
//         for(int j = 0 ; j <5 ; j++) {
//             cin >> matrix[i][j];
//             if(matrix[i][j] == 1) {
//                 rowOne = i;
//                 columnOne = j;
//             }
//         }
//     }

    
//     while(rowOne != 2) {
//         int temp;
//         if(rowOne < 2) {
//             temp = matrix[rowOne][columnOne];
//             matrix[rowOne][columnOne] = matrix[rowOne + 1][columnOne];
//             matrix[rowOne + 1][columnOne] = temp;
//             rowOne ++;
//             moves++;
//         } else {
//             temp = matrix[rowOne][columnOne];
//             matrix[rowOne][columnOne] = matrix[rowOne - 1][columnOne];
//             matrix[rowOne - 1][columnOne] = temp;
//             rowOne --;
//             moves++;
//         }
//     }

//     while(columnOne != 2) {
//         int temp;
//         if(columnOne < 2) {
//             temp = matrix[rowOne][columnOne];
//             matrix[rowOne][columnOne] = matrix[rowOne][columnOne + 1];
//             matrix[rowOne][columnOne + 1] = temp;
//             columnOne ++;
//             moves++;
//         } else {
//             temp = matrix[rowOne][columnOne];
//             matrix[rowOne][columnOne] = matrix[rowOne][columnOne - 1];
//             matrix[rowOne][columnOne - 1] = temp;
//             columnOne --;
//             moves++;
//         }
//     }

//     cout << moves << endl;

    
//     return 0;
// }

//////////////////////////// Hello World //////////////////
// int main() {
//     string s;
//     cin >> s;
//     int j = 0;
//     string main = "hello";
//     for(int i = 0 ; i < s.length() ; i++) {
//         if(main[j] == s[i])
//             j++;
//     }
//     if(j == main.length())
//         cout << "YES" << endl;
//     else
//         cout << "NO" << endl;
// }



//////////////////////// TV SALES /////////////////////
// int main() {
//     int n = 0 , m = 0;
//     int num = 0;
//     int moneyEarned = 0;
//     cin >> n >> m;
//     vector<int> tv;
//     for(int i = 0 ; i < n ; i++) {
//         int item = 0;
//         cin >> item;
//         tv.push_back(item);
//     }
//     sort(tv.begin() , tv.end());

//     for(int i = 0 ; i < n ; i++) {
//         if(tv[i] < 0 && num != m) {
//             moneyEarned += abs(tv[i]);
//             num ++;
//         }
//     }
    

//     cout << moneyEarned << endl;

// }

