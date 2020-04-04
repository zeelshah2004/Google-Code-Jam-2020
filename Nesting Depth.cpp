#include <bits/stdc++.h>

using namespace std;

int main() {

    int test;
    cin>>test;
    for(int t=1;t<=test;t++)
    {
        string s;
        cin>>s;
        int min=INT_MIN,temp1=0,temp2=0,temp3=0;

        string res="";
        for(int i=0;i<s.length();i++)
        {
            min=max(min,s[i]-48);
        }
        temp1=s[0]-48;

        while(temp1--)
        {
            res +="(";
            temp3++;
        }

        res+=s[0];

        for(int i=1;i<s.length();i++)
        {
            if(s[i]<s[i-1])
            {
                temp1=s[i-1]-s[i];
            }

            else if(s[i]>s[i-1])
            {
                temp2=s[i]-s[i-1];
            }

            while(temp1>0 && temp1--)
            {
                res+=")";
                temp3--;
            }

            while(temp2>0 && temp2--)
            {
                res+="(";
                temp3++;
            }

            res+=s[i];

        }
        while(temp3 > 0 && temp3--)
        {
            res += ")";
        }

        cout<<"Case #" << t << ": " << res <<endl;

    }
}
