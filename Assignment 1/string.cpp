https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<"\n";
    cout<<a<<b<<"\n";
    swap(a[0],b[0]);
    cout << a << " " << b << "\n";
  
    return 0;
}

void swap(char a[0], char b[0])
{
    char A,B;
    A = a[0];
    B = b[0];
    a[0] = B;
    b[0] = A;

}
