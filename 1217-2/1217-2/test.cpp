#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
//�ݹ�ʵ��ָ���͵�ö��
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
				ways[cnt][i] = i;//��ά���鴢��
		cnt++;//��������
		return;
	}
	st[u] = 2;//��һ����֧
	dfs(u + 1);//�ݹ�
	st[u] = 0;//�ָ���ԭ״̬


	st[u] = 1;//�ڶ�����֧
	dfs(u + 1);//�ݹ�
	st[u] = 0;//�ָ���ԭ״̬
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
