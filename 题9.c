//#include<stdio.h>
//
//
//void function(int arr1[], int arr2[], int n, int m)
//{
//	int k = 0;
//	for (int i =n- m;i < n; i++,k++)
//	{
//		arr2[k] = arr1[i];
//		
//
//
//	}
//	for (int j = 0; j < n-m; j++,k++)
//	{
//		arr2[k] = arr1[j];
//
//	}
//
//
//}
//
//
//
//
//
//int main() {
//
//	int arr1[1000];
//	int arr2[1000];
//	int n;
//	int m;
//	printf("请输入数组元素个数：");
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("请输入第%d个数字：", i + 1);
//		scanf_s("%d", &arr1[i]);
//
//	}
//	printf("请输入m的值(m<n):");
//	scanf_s("%d", &m);
//
//	function(arr1, arr2, n, m);
//
//	for (int j = 0; j < n; j++)
//	{
//		printf("%d ", arr2[j]);
//
//	}
//
//
//
//	return 0;
//
//}