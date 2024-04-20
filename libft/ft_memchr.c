/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:50:24 by sreo              #+#    #+#             */
/*   Updated: 2024/04/18 14:16:16 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	ss = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ss[i] == c)
			return (void *)(&ss[i]);
		i++;
	}
	return ((void *)0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*p;

// 	char str[] = "abcdef\0ghij"; /* 途中に空文字のある文字列 */
// 	p = ft_memchr(str, 'h', 12);
// 	printf("検索文字は文字列の%ld番目\n", p - str);
// 	return (0);
// }
