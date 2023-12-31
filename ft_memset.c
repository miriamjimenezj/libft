/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:28:02 by mirjimen          #+#    #+#             */
/*   Updated: 2023/10/21 11:35:53 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		len--;
		*(ptr++) = (unsigned char) c;
	}
	return (b);
}

/*
   int main()
   {
   int myArray[5];

// Inicializa todos los elementos de myArray con el valor 0.
ft_memset(myArray, 0, sizeof(myArray));

// Imprime los valores de la matriz.
for (int i = 0; i < 5; i++) {
printf("%d ", myArray[i]);
}

return 0;
}
*/
