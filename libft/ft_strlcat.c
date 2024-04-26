/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:50:49 by sreo              #+#    #+#             */
/*   Updated: 2024/04/25 22:25:58 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	if(dstsize == 0)
	{
		return (ft_strlen(src));
	}
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= dstsize)
		return (dstsize + src_len);
	while (i < dstsize - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// #include <string.h>

// int	main(void)
// {
// 	char			str[20] = "abcde";
// 	char			str2[20] = "abcde";
// 	int				result;
// 	int				result2;
// 	unsigned int	size;

// 	printf("サイズを入力\n");
// 	scanf("%u", &size);
// 	result = strlcat(str, "1234", size);
// 	result2 = ft_strlcat(str2, "1234", size);
// 	printf("本家\n%s\n返り値\n%d\n自作\n%s\n返り値\n%d\n", str, result, str2, result2);
// }
