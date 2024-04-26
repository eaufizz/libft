/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:56:38 by sreo              #+#    #+#             */
/*   Updated: 2024/04/25 17:21:50 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	minuscheck(const char *str, int *i)
{
	int	minus;

	minus = 2;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			minus++;
		*i += 1;
	}
	if (minus % 2 == 1)
		return (-1);
	else
		return (1);
}

long	nbrread(const char *str, int i)
{
	int	j;
	long	result;

	j = 0;
	result = 0;
	while ('0' <= str[i] && str[i] <= '9' && j < 10)
	{
		result = result * 10 + (str[i] - '0');
		i += 1;
		j++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	long	result;

	i = 0;
	while (str[i] == ' ')
		i++;
	minus = minuscheck(str, &i);
	result = nbrread(str, i) * minus;
	return (int)(result);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("   ----+123d858"));
// 	printf("%d\n", ft_atoi("+++- --45678hj"));
// 	return (0);
// }