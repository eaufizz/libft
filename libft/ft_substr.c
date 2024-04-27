/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 21:40:36 by sreo              #+#    #+#             */
/*   Updated: 2024/04/27 22:06:59 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *s2;
	
	i = 0;
	if(start >= ft_strlen(s))
		len = 0;
	s2 = malloc(sizeof(char *) * len + 1);
	if(s2 == NULL)
		return NULL;
	while(i < len && s[start + i])
	{
		s2[i] = s[start + i];
		i++;
	}
	while(i <= len)
	{
		s2[i] = '\0';
		i++;
	}
	return s2;
}
