#include <iostream>
#include <iomanip>
int INT_MAX = 2147483647;
using namespace std;

void vnesiMatrica(int matrix[10][10],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>matrix[i][j];
    }
}

void pecatiMatrica(int matrix[10][10],int n,int m)
{
    cout<<"Vasata matrica e : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]!=INT_MAX)
                cout<<setw(5)<<matrix[i][j];
        }
        cout<<endl;
    }
}

void najdiMaksimum(int matrix[10][10],int n,int m)
{
    int maxBroj = matrix[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==INT_MAX)
                continue;
            if(matrix[i][j]>maxBroj)
                maxBroj=matrix[i][j];

        }
    }
    cout<<"Najgolem broj vo matricata e "<<maxBroj<<endl;
}
void najdiMinumum(int matrix[10][10],int n,int m)
{
    int minBroj = matrix[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==INT_MAX)
                continue;
            if(matrix[i][j]<minBroj)
                minBroj=matrix[i][j];

        }
    }
    cout<<"Najmal broj vo matricata e "<<minBroj<<endl;
}

int sumaBroeviMatrica(int matrix[10][10],int n,int m)
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==INT_MAX)
                continue;

            suma+=matrix[i][j];
        }
    }
    return suma;
}

float najdiProsekMatrica(int matrix[10][10],int n,int m)
{
    int suma=0;
    int vkupnoElementi = n*m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==INT_MAX)
                continue;
            suma+=matrix[i][j];
        }
    }
    return (float)suma/vkupnoElementi;
}
int main()
{
    int n,m;
    cout<<"Vnesi dimenzii na matrica"<<endl;
    cin>>n>>m;
    int matrix[10][10];
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            matrix[i][j]=INT_MAX;
    vnesiMatrica(matrix,n,m);
    pecatiMatrica(matrix,n,m);
    najdiMaksimum(matrix,n,m);
    najdiMinumum(matrix,n,m);
    int suma = sumaBroeviMatrica(matrix,n,m);
    cout<<"Sumata na elementite vo matricata e " <<suma<<endl;
    float prosek = najdiProsekMatrica(matrix,n,m);
    cout<<"Prosecnata vrednost na elementite vo matricata e " <<prosek;
    return 0;
}
