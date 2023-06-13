#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, S;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cin >> S;

    int index = 0;
    while (S > 0 && index < N) {
        int maxIndex = index;
        int maxVal = arr[index];

        for (int i = index + 1; i < N && i <= index + S; i++) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
                maxIndex = i;
            }
        }

        S -= (maxIndex - index);

        for (int i = maxIndex; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = maxVal;

        index++;
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
