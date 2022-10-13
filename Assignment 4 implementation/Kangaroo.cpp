#include<iostream>

using namespace std;

int main()

{

    int ar[4],ans[100][2];

    int a=0;

    for(int i=0;i<4;i++)

    {

        cin>>ar[i];

    }

    long x=ar[0],y=ar[2];

    int n=(100000000-ar[2])/ar[3];

    for(long i=0;i<n;i++)

    {

        a++;

        x+=ar[1];

        y+=ar[3];

        if(x==y)

        {

            cout<<"YES";

            break;

        

        }

    }  

    if(a==n)

    {cout<<"NO";}  

}
