#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

const int maxn = 500005;

map<ull,vector<int> > sav;
ull f[maxn],v[maxn];
char s[maxn];
int pri[maxn],n;

void pre_treat()
{
	static bool f[maxn];
	static int stk[maxn];
	for(int i = 2,top = 0;i <= n;i ++)
	{	
		if (!f[i]) stk[++ top] = i,pri[i] = i;
		for(int j = 1;i * stk[j] <= n && j <= top;j ++)
		{
			f[i * stk[j]] = 1;
			pri[i * stk[j]] = stk[j];
			if (i % stk[j] == 0) break;
		}
	}
}

int main()
{
	scanf("%d", &n);
	f[0] = 1;
	for(int i = 1;i <= n;i ++) f[i] = ((f[i - 1] * 37ll + 123847) << 31) + rand();
	char c;
	for(int i = 1;i <= n;i ++)
	{
		while (c = getchar(),c < 'a' || c > 'z');
		s[i] = c;
	}
	pre_treat();
	ull ans = 0;
	for(int i = 1;i <= n;i ++)
	{
		for(int q = i;q > 1;q /= pri[q]) v[i] ^= f[pri[q]];
		if (s[i] != 'b' && sav.count(v[i]))
		{
			for(auto p : sav[v[i]])
			{
				int mid = sqrt(i * 1ll * p);
				if (s[mid] == 'b' && (s[i] == 'a' && s[p] == 'c' || s[i] == 'c' && s[p] == 'a')) 
					++ ans;
			}
		}
		sav[v[i]].push_back(i);
	}
	cout << ans << endl;
	return 0;
}