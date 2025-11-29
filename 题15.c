#include<stdio.h>

void Compare(int a, int b, int c)
{

	if (a > b)
	{
		if (a < c)
		{
			printf("最大值为：%d", c);
		}
		else
		{
			printf("最大值为：%d", a);
		}

	}
	else
	{
		if (b > c)
		{
			printf("最大值为：%d", b);
		}

		else
		{
			printf("最大值为：%d", c);
		}
	}
}

int main() {
	int a, b, c;
	printf("请输入三个整数：");
	scanf_s("%d %d %d", &a, &b, &c);

	Compare(a, b, c);

	return 0;
}