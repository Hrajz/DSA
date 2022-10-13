#include <bits/stdc++.h>

#include<string.h>

using namespace std;

int main()

{

    string s;

    cin>>s;

    if(s[8]=='A')

    {

        if(s[1]=='2')

        {

            s[0]=s[1]='0';

            string q = s.substr(0,8);

            cout<<q;

        }

        else {

        string q = s.substr(0,8);

        cout<<q;

        }

    }

    else 

    {

        int x=(s[0]-'0')*10 + (s[1]-'0');

        if(x==12)

        {string q = s.substr(0,8);

        cout<<q;}

        else {

        x+=12;

        string r = s.substr(2,6);

        cout<<x<<r;

        }

    

    }

}
