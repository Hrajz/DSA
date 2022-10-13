#include<iostream>

#include<cmath>

using namespace std;

int main()

{

    int n,s1=0,s2=0;

    cin>>n;

    int ar[n][n];

    for(int i=0;i<n;i++)

    {

        for(int j=0;j<n;j++)

        {

            cin>>ar[i][j];

        }

    }

    for(int i=0;i<n;i++)

    {

        s1+=ar[i][i];

    }

    int x=0,y=n-1;

    while(x<n&&y>=0)

    {

        s2+=ar[x][y];

        x++;

        y--;

    }

    cout<<abs(s1-s2);

}
