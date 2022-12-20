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
    int sumaParni =0;
    int sumaNeparni=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]%2==0)
                sumaParni+=matrix[i][j];
            else
                sumaNeparni+=matrix[i][j];
        }
    }
    cout<<"Sumata na parnite broevi vo matricata e " <<sumaParni<<endl;
    cout<<"Sumata na neparnite broevi vo matricata e " <<sumaNeparni;

}
