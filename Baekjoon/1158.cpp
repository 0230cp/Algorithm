#include <bits/stdc++.h>
using namespace std;

int n, k;

void input() {
    cin >> n >> k;
}

void sol() {
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    cout << "<";
    while (!q.empty()) {
        for (int i = 0; i < k - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();

        if (!q.empty()) {
            cout << ", ";
        }
    }
    cout << ">";
}

int main() {
    input();
    sol();
    return 0;
}

