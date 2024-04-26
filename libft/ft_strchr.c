/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:34:19 by sreo              #+#    #+#             */
/*   Updated: 2024/04/25 19:33:05 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	int			i;
	char	cc;

	i = 0;
	cc = c;
	while (string[i])
	{
		if (string[i] == cc)
			return ((char *)&string[i]);
		i++;
	}
	if (string[i] == cc)
		return ((char *)&string[i]);
	return (NULL);
}

// #include <string.h>

// int	main(void)
// {
// 	char	buffer1[20] = "computer program";
// 	char	*ptr;
// 	int		ch;

// 	ch = 'p';
// 	ptr = ft_strchr(buffer1, ch);
// 	printf("The first occurrence of %c in '%s' is '%s'\n", ch, buffer1, ptr);
// 	return (0);
// }
