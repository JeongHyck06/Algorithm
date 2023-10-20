#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, cnt = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cnt += i;
    }
    cout << cnt;
}