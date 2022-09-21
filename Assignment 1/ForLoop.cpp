https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?isFullScreen=true

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a;
    for(int i=1;i<=a;i++)
        {
            if(i==a && i<10)
            {cout<<c[a];}
            
        }
        if(a>9)
        {cout<<"Greater than 9";}
}
