#include <iostream>
#include <iomanip>
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
        bool opagjacki = false;
        bool rastecki = false;
        for(int j=1;j<m;j++)
        {
            if(matrix[i][1]>matrix[i][0] && !rastecki)
            {
                rastecki=true;
                continue;
            }
            else if(matrix[i][1]<matrix[i][0]&&!opagjacki)
            {
                opagjacki=true;
                continue;
            }
            else if(matrix[i][1]==matrix[i][0]&& (!rastecki || !opagjacki))
                break;

            if(rastecki && matrix[i][j]>matrix[i][j-1])
                continue;
            else if(rastecki && matrix[i][j]<=matrix[i][j-1])
            {
                rastecki=false;
                break;
            }
            else if(opagjacki && matrix[i][j]<matrix[i][j-1])
                continue;
            else if(opagjacki && matrix[i][j]>=matrix[i][j-1])
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
        bool opagjacki = false;
        bool rastecki = false;
        for(int j=1;j<n;j++)
        {
            if(matrix[1][i]>matrix[0][i] && !rastecki)
            {
                rastecki=true;
                continue;
            }
            else if(matrix[1][i]<matrix[0][i]&&!opagjacki)
            {
                opagjacki=true;
                continue;
            }
            else if(matrix[1][i]==matrix[0][i]&& (!rastecki || !opagjacki))
                break;

            if(rastecki && matrix[j][i]>matrix[j-1][i])
                continue;
            else if(rastecki &&  matrix[j][i]<=matrix[j-1][i])
            {
                rastecki=false;
                break;
            }
            else if(opagjacki &&  matrix[j][i]<matrix[j-1][i])
                continue;
            else if(opagjacki &&  matrix[j][i]>=matrix[j-1][i])
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
