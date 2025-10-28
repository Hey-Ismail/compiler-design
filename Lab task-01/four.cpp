#include <bits/stdc++.h>
using namespace std;

bool isAlphabet(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

bool isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

bool isUnderscore(char ch) {
    return (ch == '_');
}

bool isValid(string str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    if (len == 0) {
        return false;
    }

    char first = str[0];
    if (!isAlphabet(first) && !isUnderscore(first)) {
        return false;
    }

    for (int i = 1; i < len; i++) {
        char ch = str[i];
        if (!isAlphabet(ch) && !isDigit(ch) && !isUnderscore(ch)) {
            return false;
        }
    }

    return true;
}

int main() {
    // write your code here
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    if (isValid(str))
        cout << str << "is a valid input.\n";
    else
        cout << str << "is NOT a valid input.\n";

    return 0;
}