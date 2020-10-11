#include<stdio.h>
#include<string.h>
int main()
{
	char message[100], p[10][11];
	int x = 0, j = 0 , m , u ;
	scanf_s("%s", message,100);
	x = strlen(message);
	u = x / 10;
	for (int i = 0; i <= u; i++)
	{
		m = i * 10;
		for (int j = 0; j < 10; j++)
		{
			p[i][j] = message[m + j];
			p[i][10] = '\0'; //Debug//
		}
		printf("%s\n", p[i]);
	}
	return 0;
}
