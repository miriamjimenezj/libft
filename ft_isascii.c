#include "libft.h"

int ft_isascii(int c)
{
	if ( c >= 0 && c<= 127)
		return(1);
	else
		return(0);
}

/*
int main()
{
    char c = 'é';
    int s = isascii(c);
    printf("%d", s);
}
*/
