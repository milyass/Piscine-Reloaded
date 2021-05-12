/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:18:47 by milyass           #+#    #+#             */
/*   Updated: 2018/10/10 19:43:45 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFF_SIZE 4096

void	ft_putchar(char k)
{
	write(1, &k, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	displayfile(char *fn)
{
	char	buff[BUFF_SIZE + 1];
	int		fd;
	int		df;

	fd = open(fn, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("ERROR");
		return ;
	}
	else
	{
		df = read(fd, buff, BUFF_SIZE);
		if (df < 0)
		{
			ft_putstr("ERROR");
			return ;
		}
		ft_putstr(buff);
	}
	close(fd);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	if (argc == 2)
		displayfile(argv[1]);
	return (0);
}
