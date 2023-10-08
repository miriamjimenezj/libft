#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";

    int result1 = ft_memcmp(str1, str2, 5);
    int result2 = ft_memcmp(str1, str3, 5);

    if (result1 == 0) {
        printf("str1 y str2 son iguales.\n");
    } else {
        printf("str1 y str2 no son iguales.\n");
    }

    if (result2 == 0) {
        printf("str1 y str3 son iguales.\n");
    } else {
        printf("str1 y str3 no son iguales.\n");
    }

    return 0;
}
*/
