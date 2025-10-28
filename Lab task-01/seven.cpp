#include <bits/stdc++.h>
using namespace std;

int main() {
    // write your code here
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string first, last;

    cout << "Enter First Name: ";
    cin >> first;

    cout << "Enter Last Name: ";
    cin >> last;

    string fullName = first + " " + last;

    cout << "Full Name = " << fullName << "\n";

    return 0;
}