#include<iostream>

using namespace std;

int main()

{

    int n,max,min,s1=0,s2=0;

    cin>>n;

    int ar[n];

    for(int i=0;i<n;i++)

    {

        cin>>ar[i];

    }

    max=min=ar[0];

    for(int i=1;i<n;i++)

    {

        if(ar[i]>max)

        {max=ar[i];

        s1++;}

        else if(ar[i]<min)

        {min=ar[i];

        s2++;}

    }

    cout<<s1<<" "<<s2;

}
