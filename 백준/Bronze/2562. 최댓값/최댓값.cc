#include <iostream>

using namespace std;

int main() {
    int arr[9] = {
        0,
    };
    for (int i = 0; i < 9; i++) {
        int n;
        cin >> n;
        arr[i] = n;
    }
    int max = -1;
    int idx;
    for (int i = 0; i < 9; i++) {
        if (arr[i] > max) {
            max = arr[i];
            idx = i;
        }
    }
    cout << max << "\n"
         << idx + 1;
}