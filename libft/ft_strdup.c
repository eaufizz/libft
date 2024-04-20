/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 21:16:01 by sreo              #+#    #+#             */
/*   Updated: 2024/04/18 14:15:44 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

// char	*ft_strdup(char *src);
// int		numlen(char *str);

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

int	numlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*p;

	i = -1;
	len = numlen(src);
	p = (char *)malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	while (++i < len)
		p[i] = src[i];
	p[i] = '\0';
	return (p);
}
