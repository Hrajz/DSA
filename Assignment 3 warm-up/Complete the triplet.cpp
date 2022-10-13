#include<iostream>

#include<cmath>

using namespace std;

int main()

{

    int ar1[3],ar2[3],s1=0,s2=0;

    for(int i=0;i<3;i++)

    {

        cin>>ar1[i];

    }

    for(int i=0;i<3;i++)

    {

        cin>>ar2[i];

    }

    for(int i=0;i<3;i++)

    {

        if(ar1[i]>ar2[i])

        {s1++;}

        else if(ar2[i]>ar1[i]){

        s2++;

        }

    }

    cout<<s1<<" "<<s2;

}
