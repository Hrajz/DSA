https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true

#include <iostream>
using namespace std;
int main() {
    int a,b;
    char* str[] = {"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(i<=9)
        {
            cout<<str[i-1]<<"\n";
        }
        else
        {
            cout<<str[9+(i%2)]<<"\n";
        }
    }
    return 0;
}
