#include<stdio.h>

void Sweer(double a)
{
	printf("指数形式为：%e\n", a);
}

int main(){
	double a;
	printf("请输入一个浮点数：");
	scanf_s("%lf", &a);
	Sweer(a);
	return 0;
}