/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:13:50 by sreo              #+#    #+#             */
/*   Updated: 2024/04/23 21:55:28 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *p;

	i = 0;
	p = (unsigned char *)s;
	while(i < n)
	{
		p[i] = '\0';
		i ++;
	}
}

// int main(void)
// {
// 	int i = 0;
// 	char str[6] = "abcde";
// 	printf("%s\n", str);
// 	ft_bzero(str, 3);
// 	while(i < 5)
// 	{
// 		printf("%c\n", str[i]);
// 		i ++;
// 	}
// 	return 0;
// }
