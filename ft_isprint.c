#include "libft.h"
int ft_isprint(int c)
{
	if(c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int main()
{
	char c = 'a';
	int s = ft_isprint(c);
	printf("%d", s);
}
*/
