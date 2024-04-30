/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:37:44 by sreo              #+#    #+#             */
/*   Updated: 2024/04/29 17:35:11 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static 	char *ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j])
	{
		dest[i + j] = src[j];
		j ++;
	}
	dest[i + j] = '\0';
	return dest;
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char *strs;
	int i;
	
	i = 0;
	strs = malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if(strs == NULL)
		return NULL;
	while(s1[i])
	{
		strs[i] = s1[i];
		i++;
	}
	strs[i] = '\0';
	ft_strcat(strs, s2);
	return strs;
}

// int main (void)
// {
// 	char dest[20] = "abcde";
// 	char *dest2;

// 	dest2 = ft_strjoin(dest, "12345");
// 	printf("%s\n", dest2);
// 	return 0;
// }
