/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:36:16 by milyass           #+#    #+#             */
/*   Updated: 2018/10/04 15:17:55 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int f;
	int c;

	f = 1;
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	c = 1;
	while (c <= nb)
	{
		f = f * c;
		c++;
	}
	return (f);
}
