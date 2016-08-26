#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,y,max=-1,min=100000,count=0;
	std::vector<int> v;
	set<int>fx;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&y);
		v.push_back(y);
	}
	fx.insert(v[0]);
	for (int i = 1; i < v.size(); ++i)
	{
		min=max=v[i];
		
		for (int j = 0; j <i; ++j)
		{
			if (v[j]>max)
			{
				max=v[j];
			}
			if (v[j]<min)
			{
				min=v[j];
			}
		}
		if ((max==v[i]||min==v[i])&&!(fx.end()!=(fx.find(v[i]))))
		{
			count++;
		}
		fx.insert(v[i]);
	}

	printf("%d\n", count);
	return 0;
}
