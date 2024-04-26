/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:16:01 by sreo              #+#    #+#             */
/*   Updated: 2024/04/23 22:03:33 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*p;

	i = -1;
	len = ft_strlen(src);
	p = (char *)malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	while (++i < len)
		p[i] = src[i];
	p[i] = '\0';
	return (p);
}

// int	main(void)
// {
// 	char	*string;
// 	char	*newstr;

// 	string = "this is a copy";
// 	if ((newstr = ft_strdup(string)) != NULL)
// 		printf("The new string is: %s\n", newstr);
// 	free(newstr);
// 	return (0);
// }