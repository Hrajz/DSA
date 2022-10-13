#include<iostream>

#include<stdio.h>

using namespace std;

int main()

{

    int n,s1=0,s2=0,s3=0;

    cin>>n;

    int ar[n];

    for(int i=0;i<n;i++)

    {

        cin>>ar[i];

        if(ar[i]>0)

        {    s1++;   }

        else if(ar[i]<0)

        {s2++;}

        else if(ar[i]==0)

        { s3++;}

    }

    float a=float (s1)/n;

    printf("%.6f\n",a);

    float b=float (s2)/n;

    printf("%.6f\n",b);

    float c=float (s3)/n;

    printf("%.6f",c);

}
