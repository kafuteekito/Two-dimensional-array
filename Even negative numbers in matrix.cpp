#include <iostream>

using namespace std;

int main()
{
    int n, sum=0, num=0;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]<0 && arr[i][j]%2==0)
            {
                sum+=arr[i][j];
                num++;
            }
        }
    }
    cout<<num<<" "<<sum;
    return 0;
}
    