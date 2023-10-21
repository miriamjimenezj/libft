/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:06:52 by mirjimen          #+#    #+#             */
/*   Updated: 2023/10/21 12:10:56 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	find;
	int		i;

	find = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == find)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == find)
		return ((char *)s + i);
	return (NULL);
}

/*
   int main() {
   const char *str = "Hello, World!";
   int ch = 'o';

   char *result = ft_strchr(str, ch);

   if (result != NULL) {
   printf("Primera aparición de '%c' encontrada
   en la posición %ld\n", ch, result - str);
   } else {
   printf("'%c' no encontrado en la cadena.\n", ch);
   }

   return 0;
   }
   */
