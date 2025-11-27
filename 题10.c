#include<stdio.h>
#include<string.h>

void techstring(char str1[], char str2[], int n, int m)
{
	int k = 0;
	for (int i = m - 1; i < n+1; i++,k++)
	{

		str2[k] = str1[i];

	}

}

int main() {
	int n, m;
	char str1[1000];
	char str2[1000];
	printf("请输入字符串的长度：");
	scanf_s("%d", &n);
	getchar();
	printf("请输入原字符串：");
	fgets(str1, n+1, stdin);
	
	str1[strcspn(str1, "\n")] = '\0';

	

	printf("请输入字符串开始的起点：");
	scanf_s("%d", &m);
	techstring(str1, str2, n, m);
	printf("剪切后的字符串为：%s\n", str2);






}