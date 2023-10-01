#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

/*
   int main(void)
   {
   int n;
   char str[] = "Miriam";

   n = ft_strlen(str);
   printf("Numero de letras en %s: %d \n", str, n);
   return(0);
   }
   */
