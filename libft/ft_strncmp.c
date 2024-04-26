/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:24:41 by sreo              #+#    #+#             */
/*   Updated: 2024/04/25 23:34:48 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	// unsigned char *ss1;
	// unsigned char *ss2;

	// ss1 = (unsigned char *)s1;
	// ss2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || !s1[i] || !s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		if (s1[i] != s2[i] || !s1[i] || !s2[i])
// 			return ((unsigned char )s1[i] - (unsigned char)s2[i]);
// 		i++;
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	char	s1[] = "abcde";

// 	return (0);
// }
