#include <iostream>

using namespace std;

int main()
{
    int n, sum=0, sun=0;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    int j=n-1;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i][i];
        sun+=arr[i][j];
        j--;
    }
    cout<<sum<<" "<<sun;
    return 0;
}
