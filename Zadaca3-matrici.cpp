#include <iostream>
#include <iomanip>
int INT_MAX = 2147483647;
using namespace std;

int main()
{
    int n,m;
    cout <<"Vnesi dimenzii na matrici " <<endl;
    cin>>n>>m;
    int matrix[n][m];
    cout<<"Vnesi elementi na matricata "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>matrix[i][j];
    }

    cout<<"Eve ja vnesenata matrica: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<setw(5)<<matrix[i][j];
        cout<<endl;
    }
    cout<<"Eve ja transformiranata matrica"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<setw(5)<<(matrix[i][j]/10)%10;
        }
        cout<<endl;
    }
}
