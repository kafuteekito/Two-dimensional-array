#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    float det;
    float arr[100][100];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }
    det=(arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]);
    float detX=(arr[0][2]*arr[1][1])-(arr[0][1]*arr[1][2]);
    float detY=(arr[0][0]*arr[1][2])-(arr[0][2]*arr[1][0]);
    float X=detX/det, Y=detY/det;
    cout<<fixed<<setprecision(3)<< X << endl;
    cout<<fixed<<setprecision(3)<< Y << endl;
    return 0;
}