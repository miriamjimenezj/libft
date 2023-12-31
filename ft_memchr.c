/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:25:55 by mirjimen          #+#    #+#             */
/*   Updated: 2023/10/21 11:26:13 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*sc;
	size_t		i;

	sc = (const char *)s;
	i = -1;
	while (++i < n)
		if (*(sc + i) == (char)c)
			return ((void *)sc + i);
	return (NULL);
}

/*
   int main() {
   char str[] = "Hello, World!";
   char *result;

   result = ft_memchr(str, 'W', strlen(str));

   if (result != NULL) {
   printf("Se encontró 'W' en la posición %ld.\n", result - str);
   } else {
   printf("No se encontró 'W' en la cadena.\n");
   }

   return 0;
   }
   */
