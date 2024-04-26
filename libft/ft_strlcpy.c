/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:47:04 by sreo              #+#    #+#             */
/*   Updated: 2024/04/25 21:03:42 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (0 < dstsize && dstsize != 0)
	{
		while (src[i])
			i++;
		j = 0;
		while (j < dstsize - 1 && src[j])
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (ft_strlen(src));
}

// #include <string.h>

// int main (void)
// {
// 	char str1[7] = "abcdef";
// 	char str2[10];

// 	strlcpy(str2, str1, 10);
// 	printf("%s\n", str2);
// 	return (0);
// }

// int	main(void)
// {
// 	char	str1[7] = "abcdef";
// 	char	str2[10];

// 	ft_strlcpy(str2, str1, 10);
// 	printf("%s\n", str2);
// 	return (0);
// }
