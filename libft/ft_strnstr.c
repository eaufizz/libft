/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:22:44 by sreo              #+#    #+#             */
/*   Updated: 2024/04/25 23:05:59 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	n_len = ft_strlen(needle);
	if (needle[0] == '\0')
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		c = 0;
		while (hay[i + c] != '\0' && needle[c] != '\0' && hay[i
			+ c] == needle[c] && i + c < len)
			c++;
		if (needle[c] == '\0')
			return (&hay[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*p;

// 	p = ft_strnstr("abcdefghi", "cd", 10);
// 	printf("%s\n", p);
// 	return (0);
// }
