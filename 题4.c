//#include<stdio.h>
//
//void bubblesort(int arr[], int lens)
//{
//	for (int i = 0; i < lens - 1; i++)
//	{
//		for (int j = 0; j < lens - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		printf("请输入第%d个值：", i + 1);
//		scanf_s("%d", &arr[i]);
//	}
//	int lens = sizeof(arr) / sizeof(int);
//	bubblesort(arr, lens);
//	printf("排列后的数组为：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//
//}