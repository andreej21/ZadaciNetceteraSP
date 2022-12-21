#include <iostream>
#include <iomanip>
using namespace std;
void pecatiMatrica(int matrix[10][10],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<setw(5)<<matrix[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    int n,m;
    cout<<"Vnesi dimenzii na matrica " <<endl;
    cin>>n>>m;
    int matrix[10][10];
    cout<<"Vnesi gi elementite na matricata"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout <<"Eve ja vnesenata matrica"<<endl;
    pecatiMatrica(matrix,n,m);

    int maxRed = 0;
    int maxKol = 0;
    int minRed = 0;
    int minKol = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]>matrix[maxRed][maxKol])
            {
                maxRed=i;
                maxKol=j;
            }
            if(matrix[i][j]<matrix[minRed][minKol])
            {

                minRed=i;
                minKol=j;
            }
        }
    }

    cout<<"Najgolem broj vo matricata e "<<matrix[maxRed][maxKol]<<" ,i se naogja vo "<<maxRed<<" red i " <<maxKol<<" kolona."<<endl;
    cout<<"Najmal broj vo matricata e "<<matrix[minRed][minKol]<<" ,i se naogja vo "<<minRed<<" red i " <<minKol<<" kolona."<<endl;

    int temp = matrix[maxRed][maxKol];
    matrix[maxRed][maxKol] = matrix[minRed][minKol];
    matrix[minRed][minKol]= temp;
    cout<<"Matricata so smeneti mesta na najgolemiot i najmaliot broj : "<<endl;
    pecatiMatrica(matrix,n,m);
}
