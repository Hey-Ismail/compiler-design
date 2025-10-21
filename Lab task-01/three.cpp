#include <bits/stdc++.h>
using namespace std;

int solve(string str) {
    int n = str.length();
    if (str[0] == '/' && str[1] == '/')
        return 1;

    else if ((str[0] == '/' && str[1] == '*') && (str[n - 2] == '*' && str[n - 1] == '/'))
        return 2;
}
/////**/
// 1234
int main() {
    // write your code here
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    if (solve(str) == 1)
        cout << "comment(single line) " << str;
    else if (solve(str) == 2)
        cout << "comment(Multiline) " << str;
    else
        cout << "No comments " << str;

    return 0;
}