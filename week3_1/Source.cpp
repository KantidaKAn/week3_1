#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char i [100];
	scanf("%[^\n]s", i);
	for (int x = 0; x < strlen(i); x++) {
		if (i[x] == 'a' || i[x] == 'e' || i[x] == 'i' || i[x] == 'o' || i[x] == 'u') {
			printf("There is vowel");
			return 0 ;
		}

	}
	printf("There is not vowel");


	return 0;
}