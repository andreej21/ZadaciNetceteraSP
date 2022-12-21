#include <iostream>
#include <iomanip>

using namespace std;
void pecatiMatrica(int matrix[10][10],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<setw(5)<<matrix[i][j];
        cout<<endl;
    }
}
int main()
{
    int n,m;
    cout <<"Vnesi dimenzii na matrici " <<endl;
    cin>>n>>m;
    int matrix1[10][10];
    int matrix2[10][10];
    cout<<"Vnesi elementi na prvata matrica "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>matrix1[i][j];
    }

    cout<<"Eve ja prvata matrica: "<<endl;
    pecatiMatrica(matrix1,n,m);
    cout<<"Vnesi elementi na vtorata matrica "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>matrix2[i][j];
    }

    cout<<"Eve ja vtorata matrica: "<<endl;
    pecatiMatrica(matrix2,n,m);

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
