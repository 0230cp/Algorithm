#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    int g = gcd(a, b);
    return (a / g) * b; 
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << '\n';
    }

    return 0;
}

