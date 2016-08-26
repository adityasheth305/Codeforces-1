#include "bits/stdc++.h"
#define ll __int64

using namespace std;


int main()
{    std::ios::sync_with_stdio(false);

    int i=0,k,ans=0;
    string t,n;
    cin>>t>>n;
    sort(t.begin(),t.end());
    while(t[i]=='0'&&i<t.length()-1)i++;
    swap(t[0],t[i]);
    if (t==n)
    {
        printf("OK\n");
    }
    else
        printf("WRONG_ANSWER\n");
    return 0;
}
