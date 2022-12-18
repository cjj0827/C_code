#define _CRT_SECURE_NO_WARNINGS 1
#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
const int N = 10;
int n;
int state[N];
bool used[N];
void dfs(int u)
{
	if (u > n)
	{
		for (int i = 1; i <= n; i++)
			printf("%d ", state[i]);//´òÓ¡·½°¸
		puts("");
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (!used[i])
		{
			state[u] = i;
			used[i] = true;
			dfs(u + 1);
			//»Ö¸´
			state[u] = 0;
			used[i] = false;
		}
	}
}
int main()
{
	cin >> n;
	dfs(1);
	return 0;
}
