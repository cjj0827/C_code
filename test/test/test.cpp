#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
//递归实现指数型
//从 1∼n 这 n 个整数中随机选取任意多个，输出所有可能的选择方案。  1<n<15
using namespace std;
const int N = 16;
int n;
int st[N];

void dfs(int u)
{
	if (u > n)
	{
		for (int i = 1; i <=n; i++)//利用数组的下标输出   三种状态  0是空  1是选择  2是不选 
			if (st[i] == 1)
 				printf("%d ", i);
		printf("\n");
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
	return 0;
}
