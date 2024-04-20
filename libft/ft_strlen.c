/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:40:59 by sreo              #+#    #+#             */
/*   Updated: 2024/04/18 14:15:59 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	printf("%lu\n", ft_strlen("徳川家康"));
// 	printf("%lu\n", strlen("徳川家康"));
// 	return (0);
// }
