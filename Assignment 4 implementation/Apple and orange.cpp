#include<iostream>

using namespace std;

int main()

{

    int sb,se,app,orn,m,n,s1=0,s2=0;;

    cin>>sb>>se>>app>>orn>>m>>n;

    int apple[m];

    int orange[n];

    for(int i=0;i<m;i++)

    {

        cin>>apple[i];

        if(apple[i]+app>=sb&&apple[i]+app<=se)

        {s1++;}

    

    }

    for(int j=0;j<n;j++)

    {

        cin>>orange[j];

    if(orange[j]+orn>=sb&&orange[j]+orn<=se)

        {s2++;}

    }

    cout<<s1<<endl<<s2;

}
