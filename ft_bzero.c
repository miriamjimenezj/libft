#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
   int main() {
   char myString[10] = "aaaaaaaaaa";

   printf("myString: %s\n", myString);
// Inicializa la cadena myString con ceros.
ft_bzero(myString, sizeof(myString));

// Imprime la cadena, que ahora debería estar llena de caracteres nulos (ceros).
printf("myString: %s\n", myString);

return 0;
}
 */
