/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:34:19 by sreo              #+#    #+#             */
/*   Updated: 2024/04/18 14:15:48 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int c)
{
	int		i;

	i = 0;
	while (string[i])
	{
		if (string[i] == c)
			return ((char *)&string[i]);
		i++;
	}
	if (string[i] == c)
		return ((char *)&string[i]);
	return ((void *)0);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	buffer1[20] = "computer program";
// 	char	*ptr;
// 	int		ch;

// 	ch = 'p';
// 	ptr = ft_strchr(buffer1, ch);
// 	printf("The first occurrence of %c in '%s' is '%s'\n", ch, buffer1, ptr);
// 	return (0);
// }
