#include <bits/stdc++.h>
using namespace std;

bool checkNumericalOrNot(string str) {
    // for (char ch : str) {
    //     if (!(isdigit(ch)))
    //         return false;
    // }
    // return true;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] < '0' || str[i] > '9')
            return false;
    }
    return true;
}
int main() {
    // write your code here
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;
        if (checkNumericalOrNot(str))
            cout << "Numerical\n";
        else
            cout << "Not numerical\n";
    }

    return 0;
}