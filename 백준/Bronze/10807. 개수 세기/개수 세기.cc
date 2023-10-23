#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> a;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        a.push_back(num);
    }

    int v;
    cin >> v;
    int cnt = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == v) {
            cnt++;
        }
    }

    cout << cnt;
}