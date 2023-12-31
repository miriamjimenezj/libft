/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:28:47 by mirjimen          #+#    #+#             */
/*   Updated: 2023/11/12 18:05:38 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
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
