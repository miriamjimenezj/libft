/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:27:05 by mirjimen          #+#    #+#             */
/*   Updated: 2023/10/21 11:27:18 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
   int main() {
   char source[] = "Hello, World!";
   char destination[20];

// Copia los datos desde source a destination.
ft_memcpy(destination, source, 5);

// Imprime el contenido de destination.
printf("destination: %s\n", destination);

return 0;
}
*/
