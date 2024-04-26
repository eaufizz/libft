/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:17:13 by sreo              #+#    #+#             */
/*   Updated: 2024/04/23 22:01:56 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	long long int	i;
	long	len;

	i = 0;
	len = 0;
	while (string[len])
		len++;
	while (i <= len)
	{
		if (string[len - i] == (char)c)
			return ((char *)&string[len - i]);
		i++;
	}
	return (void *)0;
}

// #include <string.h>

// int	main(void)
// {
// 	char	buffer1[20] = "computer program";
// 	char	*ptr;
// 	int		ch;

// 	ch = 'o';
// 	ptr = ft_strrchr(buffer1, ch);
// 	printf("The first occurrence of %c in '%s' is '%s'\n", ch, buffer1, ptr);
// 	return (0);
// }
