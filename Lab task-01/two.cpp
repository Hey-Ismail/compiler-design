#include <bits/stdc++.h>
using namespace std;

void findArithmetic(string str) {
    int count = 1;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%' || str[i] == '=') {
            cout << "operator" << count << " -->" << str[i] << '\n';
            count++;
        }
    }
    // if (count == 1) {
    //     cout << "There is no operator\n";
    // }
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

        findArithmetic(str);
    }

    return 0;
}