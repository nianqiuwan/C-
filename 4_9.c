#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ÷∏’Îºı÷∏’Î
int my_strlen(char* str)
{
	char* start = str;
	while(*str != '\0')
	{
		str++;
	}
	return (str - start);
}
int main()
{
	int len = my_strlen("abcdef");
	printf("%d", len);

	return 0;
}