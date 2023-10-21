/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:02:07 by mirjimen          #+#    #+#             */
/*   Updated: 2023/10/21 12:05:30 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*last;
	char		find;
	size_t		i;

	last = (char *)s;
	find = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (last[i] == find)
			return (last + i);
		i--;
	}
	if (last[i] == find)
		return (last);
	return (NULL);
}

/*
   int main() {
   const char *str = "Hello, World!";
   int ch = 'o';

   char *result = ft_strrchr(str, ch);

   if (result != NULL) {
   printf("Última aparición de '%c' encontrada 
   en la posición %ld\n", ch, result - str);
   } else {
   printf("'%c' no encontrado en la cadena.\n", ch);
   }

   return 0;
   }
   */
