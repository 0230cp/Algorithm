#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n, m, b;
    cin >> n >> m >> b;

    vector<vector<int>> block(n, vector<int>(m));
    vector<int> arr(256, 0);

    // Input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> block[i][j];
            arr[block[i][j]]++;
        }
    }

    int minHeight = INT_MAX;
    int maxHeight = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            minHeight = min(minHeight, block[i][j]);
            maxHeight = max(maxHeight, block[i][j]);
        }
    }

    int bestTime = INT_MAX;
    int bestHeight = 0;

    for (int height = minHeight; height <= maxHeight; height++) {
        int inventory = b;
        int time = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int diff = block[i][j] - height;

                if (diff > 0) {
                    time += diff * 2;
                    inventory += diff;
                } else if (diff < 0) {
                    time -= diff;
                    inventory += diff;
                }
            }
        }

        if (inventory >= 0 && time <= bestTime) {
            bestTime = time;
            bestHeight = height;
        }
    }

    cout << bestTime << " " << bestHeight << endl;

    return 0;
}

