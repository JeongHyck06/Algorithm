#include <iostream>
#include <string>
using namespace std;

int main() {
    int X, n, a, b, sum = 0;

    cin >> X;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        sum += a * b;
    }
    if (sum == X) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}