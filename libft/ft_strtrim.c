/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:36:10 by sreo              #+#    #+#             */
/*   Updated: 2024/04/30 22:45:53 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	frontcut(const char *s1, const char *set, size_t *i)
{
	size_t	j;
	int		flag;
	size_t	s1len;

	*i = 0;
	j = 0;
	s1len = ft_strlen(s1);
	while (*i < s1len)
	{
		j = -1;
		flag = 0;
		while (set[++j])
			if (s1[*i] == set[j])
				flag = 1;
		if (flag == 0)
			break ;
		*i += 1;
	}
}

static void	backcut(const char *s1, const char *set, size_t *s1len, size_t i)
{
	size_t	j;
	int		flag;

	while (i <= *s1len)
	{
		j = -1;
		flag = 0;
		while (set[++j])
			if (s1[*s1len - 1] == set[j])
				flag = 1;
		if (flag == 0)
			break ;
		*s1len -= 1;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	size;
	size_t	s1len;
	char	*s2;

	s1len = ft_strlen(s1);
	frontcut(s1, set, &i);
	backcut(s1, set, &s1len, i);
	size = s1len - i + 1;
	s2 = ft_calloc(sizeof(char), size);
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, &s1[i], size);
	return (s2);
}
