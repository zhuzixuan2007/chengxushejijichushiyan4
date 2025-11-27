//#include<stdio.h>
//
//void Input(int arr[],int lens)
//{
//	for (int i = 0; i < lens; i++)
//	{
//		printf("请输入第%d个值：", i + 1);
//		scanf_s("%d", &arr[i]);
//	}
//}
//
//void swap(int arr[], int lens)
//{
//	int mindex = 0;
//	for (int i = 1; i < lens; i++)
//	{
//		if (arr[i] < arr[mindex])
//		{
//			mindex = i;
//		}
//	}
//	int temp1 = arr[0];
//	arr[0] = arr[mindex];
//	arr[mindex] = temp1;
//
//	int maxdex = 0;
//	for (int j = 0; j < lens; j++)
//	{
//		if (arr[j] > arr[maxdex])
//		{
//			maxdex = j;
//		}
//
//	}
//	int temp2 = arr[lens - 1];
//	arr[lens - 1] = arr[maxdex];
//	arr[maxdex] = temp2;
//
//}
//
//void Printf(int arr[], int lens)
//{
//	for (int n = 0; n < lens; n++)
//	{
//
//		printf("%d ", arr[n]);
//
//	}
//}
//
//
//
//int main() {
//	int arr[10];
//	int lens = sizeof(arr) / sizeof(int);
//
//	Input(arr, lens);
//	swap(arr, lens);
//	Printf(arr, lens);
//
//
//
//
//	return 0;
//
//
//
//}