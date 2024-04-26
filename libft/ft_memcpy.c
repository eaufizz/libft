/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:08:37 by sreo              #+#    #+#             */
/*   Updated: 2024/04/23 21:57:02 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*p;
	unsigned char	*c;
	size_t			i;

	p = (unsigned char *)buf1;
	c = (unsigned char *)buf2;
	if(buf1 == NULL && buf2 == NULL)
		return buf1;
	if(n <= 0)
		return buf1;
	i = 0;
	while (i < n)
	{
		p[i] = c[i];
		i++;
	}
	return buf1;
}

// int	main(void)
// {
// 	char	buf[] = "";
// 	char	buf2[] = "asd";
// 	ft_memcpy(buf, buf2, 4);
// 	printf("コピー後のbuf文字列→%s\n", buf);
// 	return (0);
// }