#include<stdio.h>
#include<string.h>

void Transfer(char str[],int lens)
{
	for (int i = 0; i < lens-1; i++)
	{
		str[i] = str[i] + 32;
	}
}

int main() {
	char str[1000];
	printf("ÇëÊäÈëÒ»´®´óÐ´×ÖÄ¸£º");
	fgets(str, 1000, stdin);

	int lens = strlen(str);

	Transfer(str, lens);



	printf("%s", str);


	return 0;

}