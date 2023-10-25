#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int num, max = -1000000, min = 1000000;

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num <= min) {
            min = num;
        }
        if (num >= max) {
            max = num;
        }
    }
    cout << min << " " << max;
}