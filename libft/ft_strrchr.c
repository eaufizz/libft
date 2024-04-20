/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:17:13 by sreo              #+#    #+#             */
/*   Updated: 2024/04/18 14:15:54 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *string, int c)
{
	int		i;
	int len;

	i = 0;
	len = 0;
	while(string[len])
		len ++;
	while (i < len)
	{
		if (string[len - i] == c)
			return ((char *)&string[len - i]);
		i++;
	}
	return ((void *)0);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	buffer1[20] = "computer program";
// 	char	*ptr;
// 	int		ch;

// 	ch = 'o';
// 	ptr = ft_strrchr(buffer1, ch);
// 	printf("The first occurrence of %c in '%s' is '%s'\n", ch, buffer1, ptr);
// 	return (0);
// }
