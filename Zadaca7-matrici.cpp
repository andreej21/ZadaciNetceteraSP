#include <iostream>
#include <iomanip>
#include <set>
int INT_MAX = 2147483647;
using namespace std;

int main()
{
    int n,m;
    cout <<"Vnesi dimenzii na matrici " <<endl;
    cin>>n>>m;
    int matrix1[n][m];
    int matrix2[n][m];
    cout<<"Vnesi elementi na prvata matrica "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>matrix1[i][j];
    }

    cout<<"Eve ja prvata matrica: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<setw(5)<<matrix1[i][j];
        cout<<endl;
    }
    cout<<"Vnesi elementi na vtorata matrica "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>matrix2[i][j];
    }

    cout<<"Eve ja vtorata matrica: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<setw(5)<<matrix2[i][j];
        cout<<endl;
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix1[i][j]==matrix2[i][j])
                continue;
            cout<<"Dvete matrici ne se ednakvi"<<endl;
            return 0;
        }
    }
    cout<<"Dvete matrici se ednakvi"<<endl;
}
