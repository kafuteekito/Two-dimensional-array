#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int value = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = value;
            value++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<< " ";
            }
            cout<<endl;
        }
        else if(i%2==1)
        {
            for(int j=n-1;j>=0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}