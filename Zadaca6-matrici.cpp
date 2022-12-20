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
    for(int i=0;i<n;i++)
    {
        bool opagjacki = true;
        bool rastecki = true;
        for(int j=1;j<m;j++)
        {
            if(matrix[i][j]>matrix[i][j-1])
                continue;
            else
            {
                rastecki=false;
                break;
            }
        }
        for(int j=1;j<m;j++)
        {
            if(matrix[i][j]<matrix[i][j-1])
                continue;
            else
            {
                opagjacki=false;
                break;
            }
        }
        if(rastecki)
            cout<<"Redot "<<i<<" e rastecki."<<endl;
        else if(opagjacki)
            cout<<"Redot "<<i<<" e opagjacki."<<endl;
        else
            cout<<"Redot "<<i<<" ne e nitu rastecki nitu opagjacki"<<endl;

    }
    for(int i=0;i<m;i++)
    {
        bool opagjacki = true;
        bool rastecki = true;
        for(int j=1;j<n;j++)
        {
            if(matrix[j][i]>matrix[j-1][i])
                continue;
            else
            {
                rastecki=false;
                break;
            }
        }
        for(int j=1;j<n;j++)
        {
            if(matrix[j][i]<matrix[j-1][i])
                continue;
            else
            {
                opagjacki=false;
                break;
            }
        }
        if(rastecki)
            cout<<"Kolonata "<<i<<" e rastecka."<<endl;
        else if(opagjacki)
            cout<<"Kolonata "<<i<<" e opagjacka."<<endl;
        else
            cout<<"Kolonata "<<i<<" ne e nitu rastecka nitu opagjacka"<<endl;

    }
}
