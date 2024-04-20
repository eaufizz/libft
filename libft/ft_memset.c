/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:13:05 by sreo              #+#    #+#             */
/*   Updated: 2024/04/18 14:15:43 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[5] = "abcd";

// 	printf("before\n%s\n\n", str);
// 	ft_memset(str, 'Z', 2);
// 	printf("after\n%s\n", str);
// 	return (0);
// }
