//#include<stdio.h>
//
//int GCD(int a, int b)
//{
//	int c = a % b;
//	while (c != 0)
//	{
//	
//		a = b;
//		b = c;
//		c = a % b;
//
//	}
//	return b;
//
//}
//int LCM(int a,int b, int GCD)
//{
//	
//	int LCM = (a * b) / GCD;
//	return LCM;
//
//}
//
//int main() {
//	int a, b;
//	printf("请输入两个整数：");
//	scanf_s("%d %d", &a, &b);
//	
//	int GCD1 = GCD(a, b);
//	int LCM1 = LCM(a, b, GCD1);
//
//	printf("它们的最大公约数为：%d\n", GCD1);
//	printf("它们的最小公倍数为：%d\n", LCM1);
//
//	return 0;
//}