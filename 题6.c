//#include<stdio.h>
//
//void Charactercount(char str[], int* letter, int* math, int* space, int* other)
//{
//	*letter = *math = *space = *other = 0;
//	for (int i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] >= 'A' && str[i] <='z')
//		{
//			(*letter)++;
//		}
//		else if (str[i] >= '0' && str[i] <= '9')
//		{
//			(*math)++;
//		}
//	    else if (str[i] == ' ')
//		{
//			(*space)++;
//		}
//		else
//		{
//			(*other)++;
//		}
//
//
//	}
//}
//
//int main() {
//	int letter, math, space, other;
//	char str[1000];
//	printf("请输入一串字符串：");
//	fgets(str, 1000, stdin);
//
//	str[strcspn(str, "\n")] = '\0';
//
//	Charactercount(str, &letter, &math, &space, &other);
//
//
//	printf("字符串中的字母数为：%d\n", letter);
//	printf("字符串中的数字数为：%d\n", math);
//	printf("字符串中的空格数为：%d\n", space);
//	printf("字符串中的其他数为：%d\n", other);
//
//	return 0;
//}