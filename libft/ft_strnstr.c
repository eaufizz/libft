/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:22:44 by sreo              #+#    #+#             */
/*   Updated: 2024/04/20 20:54:18 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	strlen;

	strlen = 0;
	while (needle[strlen])
		strlen++;
	i = 0;
	while (i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (j == strlen - 1)
				return (char *)(&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*p;

// 	p = ft_strnstr("abcdefghi", "cd", 10);
// 	printf("%s\n", p);
// 	return (0);
// }
