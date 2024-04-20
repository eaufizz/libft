/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreo <sreo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:57:41 by sreo              #+#    #+#             */
/*   Updated: 2024/04/20 21:30:34 by sreo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	if(size == 0 || n == 0)
		return NULL;
	p = malloc(n * size);
	if (p == NULL)
		return (NULL);
	return (p);
}

// #include <stdio.h>

// int main (void)
// {
// 	char *ch;

// 	ch = (char*)calloc(1, 100);
// 	scanf("%s", ch);
// 	printf("入力は%s\n", ch);
// 	free(ch);
// 	return (0);
// }
