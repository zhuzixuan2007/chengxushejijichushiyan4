//#include<stdio.h>
//
//int MAX_INDEX(int arr[], int n)
//{
//	int maxindex = 0;
//	for (int i = 1; i < n; i++)
//	{
//
//		if (arr[i] > arr[maxindex])
//		{
//			maxindex = i;
//		}
//	}
//
//	return maxindex;
//
//
//
//
//}
//
//
//
//
//
//
//1
//
//
//int main() {
//
//	int arr[1000];
//	int n;
//	printf("请输入数的个数：");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("请为数组的第%d个元素：", i + 1);
//		scanf_s("%d", &arr[i]);
//
//
//
//	}
//
//
//	int maxindex = MAX_INDEX(arr, n);
//	
//
//
//	printf("最大值的序号为：%d", maxindex);
//
//
//	return 0;
//
//
//}