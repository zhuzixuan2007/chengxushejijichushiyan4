//#include<stdio.h>
//#include<string.h>
//
//void Transfer(char week[])
//{
//	if (strcmp(week,"周一")==0)
//	{
//		printf("%d\n", 1);
//	}
//
//	else if (strcmp(week,"周二")==0)
//	{
//		printf("%d\n", 2);
//	}
//
//	else if (strcmp(week, "周三") == 0)
//	{
//		printf("%d\n", 3);
//	}
//
//	else if (strcmp(week, "周四") == 0)
//	{
//		printf("%d\n", 4);
//	}
//
//	else if (strcmp(week, "周五") == 0)
//	{
//		printf("%d\n", 5);
//	}
//
//	else if (strcmp(week, "周六") == 0)
//	{
//		printf("%d\n", 6);
//	}
//
//	else
//	{
//		printf("%d\n", 7);
//	}
//}
//
//int main() {
//	char week[1000];
//	printf("请输入周一到周日任何一个：");
//	fgets(week, 1000, stdin);
//	week[strcspn(week, "\n")] = '\0';
//
//
//
//	Transfer(week);
//
//	return 0;
//}