#include "bits/stdc++.h"
#define ll __int64

using namespace std;
ll bb[25];
inline ll get(){ll c;ll n = 0;while ((c = getchar()) >= '0' && c <= '9')n = (n << 3) + ( n << 1 ) + c - '0';return n;}

inline void coutt(ll ans){if(!ans){putchar('0');return;}ll k = 0;while(ans){bb[k] = char((ans%10)+'0');++k;ans/=10;}for(int i=k-1;i>=0;--i)putchar(bb[i]);}

int main()
{	std::ios::sync_with_stdio(false);

	ll t=1,n,m;
	n=get();
	m=floor((-1+sqrt(8*n-7))/2);
	cout<<n-m*(m+1)/2;
	return 0;
}
