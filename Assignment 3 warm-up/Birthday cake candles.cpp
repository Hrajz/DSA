#include<iostream>

using namespace std;

int main()

{

    int n,sum=0,max=0;

    cin>>n;

    int ar[n];

    for(int i=0;i<n;i++)

    {

        cin>>ar[i];

        if(ar[i]>max)

        {max=ar[i];}

    }

    for(int i=0;i<n;i++)

    {

        if(ar[i]==max)

        {sum++;}

    }

    cout<<sum;

}
