#include <iostream>

using namespace std;

int main()
{
    int n, m, rev = 0, i, j;
    cin >> n >> m;
    int arr[n][m], arrayl[n][m];

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> arrayl[i][j];
            if (arrayl[i][j] == 1) {
                rev += arr[i][j];
            }
        }
    }

    cout << rev;
    return 0;
}
