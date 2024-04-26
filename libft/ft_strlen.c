/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:40:59 by sreo              #+#    #+#             */
/*   Updated: 2024/04/23 22:00:52 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <string.h>
// int	main(void)
// {
// 	printf("%lu\n", ft_strlen("徳川家康"));
// 	printf("%lu\n", strlen("徳川家康"));
// 	return (0);
// }
