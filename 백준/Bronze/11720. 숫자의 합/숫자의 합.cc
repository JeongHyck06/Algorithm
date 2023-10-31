#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, res = 0;
    char ch[100001];
    cin >> n >> ch;
    for (int i = 0; i < n; i++) {
        res += ch[i] - '0';
    }
    cout << res;

}