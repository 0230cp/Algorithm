#include <bits/stdc++.h>
using namespace std;

void sol(int n) {
    while (n--) {
        string instruction;
        int vectorSize;
        string vectorString;
        string a;

        cin >> instruction;
        cin >> vectorSize;
        cin >> vectorString;

        deque<int> dq;

        for (char c : vectorString) {
            if (isdigit(c)) {
                a += c;
            } else if (c == ',' || c == ']') {
                if (!a.empty()) {
                    int tmp = stoi(a);
                    dq.push_back(tmp);
                    a = "";
                }
            }
        }

        bool reverseflag = false;
        bool error = false;
        for (char c : instruction) {
            if (c == 'R') {
                reverseflag = !reverseflag;
            } else if (c == 'D') {
                if (dq.empty()) {
                    error = true;
                    break;
                } else {
                    if (reverseflag) {
                        dq.pop_back();
                    } else {
                        dq.pop_front();
                    }
                }
            }
        }

        if (error) {
            cout << "error" << '\n';
        } else {
            cout << '[';
            if (reverseflag) {
                while (!dq.empty()) {
                    cout << dq.back();
                    dq.pop_back();
                    if (!dq.empty()) {
                        cout << ',';
                    }
                }
            } else {
                while (!dq.empty()) {
                    cout << dq.front();
                    dq.pop_front();
                    if (!dq.empty()) {
                        cout << ',';
                    }
                }
            }
            cout << ']' << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    sol(n);
    return 0;
}
