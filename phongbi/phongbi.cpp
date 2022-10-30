#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);

    long double a, b, c, d;
    cin >> a >> b >> c >> d;

    /// a <= c && b <= d
    long double n = a, m = b;
    int cnt1 = 0;
    while (n > c) {
        n /= 2;
        cnt1 += 1;
    }
    while (m > d) {
        cnt1 += 1;
        m /= 2;
    }

    /// a <= d && b <= c
    int cnt2 = 0;
    n = a, m = b;

    while (n > d) {
        n /= 2;
        cnt2 += 1;
    }
    while (m > c) {
        cnt2 += 1;
        m /= 2;
    }

    cout << min(cnt1, cnt2);
}
