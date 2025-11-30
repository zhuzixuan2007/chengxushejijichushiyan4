#include<stdio.h>

void Swiftarr(int arr[5][5]) {
	for (int i = 0; i < 5; i++)
	{
		for(int j=i;j<5;j++)
		{
			int temp=arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
		
	}
}
int main() {
	int arr[5][5];
	printf("请输入一个5x5的矩阵：\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	Swiftarr(arr);
	printf("转置后的矩阵为：\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}