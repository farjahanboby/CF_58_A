#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,p=0;
    string s,t,k;
    t="hello";
    cin>>s;
    i=0;
        for(j=0;j<s.length();j++){
            if(t[i]==s[j]){
                i++;
            }
    }

    if(i<5)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
