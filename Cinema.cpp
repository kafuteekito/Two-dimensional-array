#include <iostream>

using namespace std;

int main()
{
    int n, m, i, j, num=0;
    cin >> n >> m;
    int arr[n][m], arrayl[n][m];
    int value=1;
    for (i = n-1; i >= 0; i--) {
        for (j = 0; j < m; j++) {
            arr[i][j]=value;
            value++;
        }
    }
    value=1;
    for (i = 0; i < m; i++) {
        for (j = n-1; j >=0 ; j--) {
            arrayl[j][i]=value;                         
            value++;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]==arrayl[i][j])
            {
                num++;
            }
        }
   }
   cout<<num;
    return 0;
}

