#include<iostream>

#include<stdio.h>

using namespace std;

int main()

{

    long ar[5],min=1000000000,max=0,sum=0;

    for(int i=0;i<5;i++)

    {

        cin>>ar[i];

        if(ar[i]>max)

        {max=ar[i];}

    }

    for(int i=0;i<5;i++)

    {

        if(ar[i]<min)

        {min=ar[i];}

    }

    for(int i=0;i<5;i++)

    {

        sum+=ar[i];

    }

    cout<<sum-max<<" "<<sum-min;

}
