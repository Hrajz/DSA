#include <iostream>

using namespace std;

int main()

{

    int n;

    cin>>n;

    int ar[n],ans[n];

    for(int i=0;i<n;i++)

    {

        cin>>ar[i];

        if(ar[i]<38)

        {ans[i]=ar[i];}

        else 

        {

        if((ar[i]+2)%5==0)

        {ans[i]=ar[i]+2;}

        else if((ar[i]+1)%5==0)

        {ans[i]=ar[i]+1;}

        else {

        ans[i]=ar[i];

        }

        }

    }

    for(int i=0;i<n;i++)

    {

     cout<<ans[i]<<endl;   

    }

    return 0;

}
