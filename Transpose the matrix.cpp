#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int arr[100][100], tr[100][100];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tr[j][i]=arr[i][j];
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<tr[i][j]<<" ";
        }
        cout<<endl;
    }
      
    return 0;
}