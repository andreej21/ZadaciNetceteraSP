#include <iostream>
#include <iomanip>
int INT_MAX = 2147483647;
using namespace std;

int main()
{
    int n,m;
    cout<<"Vnesi dimenzii na matrica " <<endl;
    cin>>n>>m;
    int matrix[n][m];
    cout<<"Vnesi gi elementite na matricata"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout <<"Eve ja vnesenata matrica"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(5)<<matrix[i][j];
        }
        cout<<endl;
    }
    int maxBroj = matrix[0][0];
    int minBroj= matrix[0][0];
    int maxRed = 0;
    int maxKol = 0;
    int minRed = 0;
    int minKol = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]>maxBroj)
            {
                maxBroj=matrix[i][j];
                maxRed=i;
                maxKol=j;
            }
            if(matrix[i][j]<minBroj)
            {
                minBroj=matrix[i][j];
                minRed=i;
                minKol=j;
            }
        }
    }

    cout<<"Najgolem broj vo matricata e "<<maxBroj<<" ,i se naogja vo "<<maxRed<<" red i " <<maxKol<<" kolona."<<endl;
    cout<<"Najmal broj vo matricata e "<<minBroj<<" ,i se naogja vo "<<minRed<<" red i " <<minKol<<" kolona."<<endl;


    matrix[maxRed][maxKol] = minBroj;
    matrix[minRed][minKol]= maxBroj;
    cout<<"Matricata so smeneti mesta na najgolemiot i najmaliot broj : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(5)<<matrix[i][j];
        }
        cout<<endl;
    }
}
