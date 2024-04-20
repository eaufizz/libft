/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:24:41 by sreo              #+#    #+#             */
/*   Updated: 2024/04/18 20:08:55 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "abcde";

	printf("%d\n", ft_strncmp(s1, "abcce", 4));
	return (0);
}
*/

#include <stddef.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		else
			i++;
	}
	return (0);
}
