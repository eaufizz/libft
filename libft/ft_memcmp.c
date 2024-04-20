/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:44:02 by sreo              #+#    #+#             */
/*   Updated: 2024/04/20 16:11:05 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1 - ss2);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	int	len;
// 	int	result;

// 	if (argc != 3)
// 	{
// 		printf("Usage: %s string1 string2¥n", argv[0]);
// 	}
// 	else
// 	{
// 		/* Determine the length to be used for comparison */
// 		if (strlen(argv[1]) < strlen(argv[2]))
// 			len = strlen(argv[1]);
// 		else
// 			len = strlen(argv[2]);
// 		result = memcmp(argv[1], argv[2], len);
// 		printf("When the first %i characters are compared,¥n", len);
// 		if (result == 0)
// 			printf("¥" % s¥" is identical to ¥" %s¥"\n", argv[1], argv[2]);
// 		else if (result < 0)
// 			printf("¥" % s¥" is less than ¥" %s¥"\n", argv[1], argv[2]);
// 		else
// 			printf("¥" % s¥" is greater than ¥" %s¥"\n", argv[1], argv[2]);
// 	}
// }
