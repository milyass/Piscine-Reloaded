/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 20:51:52 by milyass           #+#    #+#             */
/*   Updated: 2018/10/03 21:01:11 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char k);

void	ft_print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
		ft_putchar(a++);
}
