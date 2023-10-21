/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirjimen <mirjimen@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:52:32 by mirjimen          #+#    #+#             */
/*   Updated: 2023/10/21 12:00:53 by mirjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	j = dst_length;
	i = 0;
	if (dst_length < size - 1 && size > 0)
	{
		while (src[i] && dst_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (dst_length >= size)
		dst_length = size;
	return (dst_length + src_length);
}

/*
 * int main() {
 char dest[20] = "Hello, ";
 const char *src = "World!";

 printf("Destination string: %s\n", dest);
 printf("Origin string: %s\n", src);
 ft_strlcat(dest, src, sizeof(dest));
 printf("Concatenated string: %s\n", dest);


 return 0;
 }
 */
