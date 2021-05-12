/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 13:37:39 by milyass           #+#    #+#             */
/*   Updated: 2018/10/11 15:22:46 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *a;
	int i;

	if (min >= max)
	{
		return (NULL);
	}
	a = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
