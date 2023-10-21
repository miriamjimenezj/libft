/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:27:34 by mirjimen          #+#    #+#             */
/*   Updated: 2023/10/21 11:35:26 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}

/*
   int main() {
   char str[] = "Hello, World!";

// Mover la cadena "World!" tres posiciones 
// a la izquierda dentro de la misma cadena.
ft_memmove(str + 2, str +  1+ 0, strlen(str) - 1);

// Imprimir la cadena modificada.
printf("str: %s\n", str);

return 0;
}
*/
