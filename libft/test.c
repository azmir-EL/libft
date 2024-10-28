#include <stdio.h>
#include <string.h>
char *ft(char *s)
{
	int i = 0;
	int len = 0;
	while (s[len])
		len++;
	len -=  1;
	while (s[len])
	{
		if (s[len] == ' ')
			return (s + len);
		len--;
	}
	return (0);
}
int main(void)
{
	char s[] = "hello world";
	printf("%s\n",ft(s));
	return(0);
}
