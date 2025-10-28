#include <bits/stdc++.h>
using namespace std;

void findMinMax(vector<int> array) {
    int minVal = array[0];
    int maxVal = array[0];
    int n = array.size();

    for (int i = 1; i < n; i++) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }

    cout << "Minimum = " << minVal << "\n";
    cout << "Maximum = " << maxVal << "\n";
}
int main() {
    // write your code here
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    findMinMax(array);

    return 0;
}