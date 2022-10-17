#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int sum=0,k,v,temp=0;
    string a,b;
    cin>>a>>b>>k;
    v=min(a.size(),b.size());
    for(int i=0;i<v;i++)
        {
             if(a[i]==b[i])
             {sum=sum+1;}
             else {
             break;}
        }
        int n=a.size()+b.size()-(2*sum);
        if(n==0)
        {
            for(int i=2;i<=a.size()+b.size();i+=2)
            {if(k==i)
            {cout<<"Yes";
            temp++;
            break;}
            else if(k==a.size()+b.size()||k>=a.size()+b.size()+1)
            {cout<<"Yes";
            temp++;
            break;}}
           
            if(temp==0)
            {cout<<"No";}
         }
       
        else
        {
           for(int i=0;i<=a.size()+b.size()-n;i+=2) 
           {
               if(k==n+i)
               {cout<<"Yes";
                temp++;
                break;}
                else if(k==a.size()+b.size()||k>=a.size()+b.size()+1)
                 {cout<<"Yes";
                 temp++;
                 break;}
           }
                if(temp==0)
                {cout<<"No";}
           
        }
    
}
