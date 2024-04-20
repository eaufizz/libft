/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:28:40 by sreo              #+#    #+#             */
/*   Updated: 2024/04/20 22:23:54 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*c;
	unsigned char	*cc;

	c = (unsigned char *)buf2;
	i = 0;
	p = (unsigned char *)buf1;
	cc = NULL;
	while (c[i] != '\0')
	{
		cc[i] = c[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		p[i] = cc[i];
		i++;
	}
	return (buf1);
}

// #include <stddef.h>

// void *ft_memmove(void *buf1, const void *buf2, size_t n)
// {
//     unsigned char *p = buf1;
//     const unsigned char *c = buf2;

//     // コピー元とコピー先のアドレスがオーバーラップする場合、逆順にコピーする
//     if (p > c && p < c + n)
//     {
//         for (size_t i = n; i > 0; i--)
//             p[i - 1] = c[i - 1];
//     }
//     else
//     {
//         for (size_t i = 0; i < n; i++)
//             p[i] = c[i];
//     }

//     return buf1;
// }


#include <stdio.h>

int	main(void)
{
	char buf[] = "ABCDDEFG";

	ft_memmove(buf + 3, buf, 3);
	printf("コピー後のbuf文字列→%s\n", buf);
	return (0);
}
