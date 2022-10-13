#include<iostream>

using namespace std;

int main()

{

    int n;

    long sum=0;

    cin>>n;

    long ar[n];

    for(int i=0;i<n;i++)

    {

        cin>>ar[i];

        sum+=ar[i];

    }

    cout<<sum;

}
