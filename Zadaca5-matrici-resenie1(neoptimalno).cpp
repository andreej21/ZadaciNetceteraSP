#include <iostream>
#include <iomanip>
int INT_MAX = 2147483647;
using namespace std;

int main()
{

    //Na mestoto kade sto bi stoele duplikatite ke stavam vrednost -1
    //NEOPTIMALNO RESENIE - PROCITAJTE DESCRIPTION OD GITHUB
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

    int niza[n*m];
    int brojacNiza=0;
    int novaMatrica[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            bool flag = false;
            for(int k=0;k<sizeof(niza)/sizeof(niza[0]);k++)
            {
                if(niza[k]==matrix[i][j])
                {
                    flag=true;
                    break;
                }
            }
            if(flag)
            {
                novaMatrica[i][j]=-1;
                continue;
            }
            novaMatrica[i][j]=matrix[i][j];
            niza[brojacNiza]=matrix[i][j];
            brojacNiza++;
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
