


////////////////////////////// Palindrome ////////////////////////////////

// int main() {
//     long long int num;
//     cin >> num;
//     ostringstream str1;
//     str1 << num;
//     string mainString = str1.str();
//     int lenMainString = mainString.length();
//     if(mainString == string(mainString.rbegin() , mainString.rend())) {
//         cout << "Yes" << endl;
//     } else if (mainString[lenMainString - 1] == '0') {
//         string withoutLast = "";
//         for(int i = 0 ; i < mainString.length() ; i++) {
//             if(mainString[i] == '0')
//                 break;
//             else
//                 withoutLast += mainString[i];
//         }
//         if(withoutLast == string(withoutLast.rbegin() , withoutLast.rend()))
//             cout << "Yes" <<  endl;
//         else
//             cout << "No" << endl;
//     } else {
//         cout << "No" << endl;
//     }
// }


////////////////////////// E ////////////////////////////////
// int sumDigits(int no)
//     {
//         return no == 0 ? 0 : no % 10 + sumDigits(no / 10);
//     }
// int main() {
//     int sum = 0;
//     int N = 0 , A = 0 , B = 0;
//     cin >> N >> A >> B;
//     for(int i = 1 ; i <= N ; i++) {
//         if(sumDigits(i) >=A && sumDigits(i) <= B)
//             sum += i;
//     }
//     cout << sum << endl;
// }



////////////////////////////// Sequence //////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> hm;
 
void countFreq(vector<long long int> a, int n)
{
    // Insert elements and their
    // frequencies in hash map.
    for (int i=0; i<n; i++)
        hm[a[i]]++;
}

int frequency(int x)
{
    return hm[x];
}

int main() {
    int n = 0;
    cin >> n;
    int result = 0;
    long long int currentNum = 0;
    vector<long long int> arr;
    vector<long long int> current;
    for(int i = 0 ; i < n ; i++) {
        long long int item;
        cin >> item;
        arr.push_back(item);
    }
    countFreq(arr , n);
    for(int i = 0 ; i < n ; i++) {
        if(!count(current.begin() , current.end() , arr.at(i))) {
            int freqDigit = 0;
            freqDigit = frequency(arr.at(i));
            if(freqDigit > arr.at(i)) {
                result += (freqDigit - arr.at(i));
                current.push_back(arr.at(i));
            }
            else if (freqDigit < arr.at(i)) {
                result += (freqDigit);
                current.push_back(arr.at(i));
            }
        }
        
    }
    cout << result << endl;


}