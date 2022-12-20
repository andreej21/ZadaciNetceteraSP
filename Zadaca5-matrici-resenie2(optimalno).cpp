#include <iostream>
#include <iomanip>
#include <set>
int INT_MAX = 2147483647;
using namespace std;

int main()
{

    //Na mestoto kade sto bi stoele duplikatite ke stavam vrednost -1
    //OPTIMALNO RESENIE - PROCITAJ DESCRIPTION NA GITHUB
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

    int novaMatrica[n][m];
    set<int> najdeniElementi;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(najdeniElementi.find(matrix[i][j])!=najdeniElementi.end())
            {
                novaMatrica[i][j] = -1;
                continue;
            }
            novaMatrica[i][j]=matrix[i][j];
            najdeniElementi.insert(matrix[i][j]);
        }
    }
    cout<<"Novata matrica e : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<setw(5)<<novaMatrica[i][j];
        cout<<endl;
    }
}
