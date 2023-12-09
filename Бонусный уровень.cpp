#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int>> arr(N, vector<int>(N));

    int num = 1;

    for (int i = 0; i < N; i++) {
        int r = i;
        int c = 0;

        while (r >= 0 && c < N) {
            arr[r][c] = num++;
            r--;
            c++;
        }
    }

    for (int j = 1; j < N; j++) {
        int r = N - 1;
        int c = j;

        while (r >= 0 && c < N) {
            arr[r][c] = num++;
            r--;
            c++;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
