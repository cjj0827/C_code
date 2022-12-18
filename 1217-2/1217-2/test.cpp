#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
//递归实现指数型的枚举
using namespace std;
const int N = 16;
int n;
int st[N];
int ways[1 << 15][16], cnt;

void dfs(int u)
{
	if (u > n)
	{
		for (int i = 1; i <= n; i++)
			if (st[i] == 1)
				ways[cnt][i] = i;//二维数组储存
		cnt++;//行数增加
		return;
	}
	st[u] = 2;//第一个分支
	dfs(u + 1);//递归
	st[u] = 0;//恢复到原状态


	st[u] = 1;//第二个分支
	dfs(u + 1);//递归
	st[u] = 0;//恢复到原状态
}
int main()
{
	cin >> n;
	dfs(1);
	for (int i = 0; i < cnt; i++)
	{
		for (int j = 1; j <= n; j++)
			printf("%d ", ways[i][j]);
		puts("");
	}
	return 0;
}
