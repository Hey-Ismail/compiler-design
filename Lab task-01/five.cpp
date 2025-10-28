#include <bits/stdc++.h>
using namespace std;

void checkAvgrage(vector<int> array) {
    int sum = 0, n = array.size();
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    double avg = 0;
    if (n > 0) {
        avg = (double)sum / n;
    }

    cout << "Average : " << avg;
}
int main() {
    // write your code here
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    checkAvgrage(array);
    return 0;
}