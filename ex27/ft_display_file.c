/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_display_file.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: dcasasol <dcasasol@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/05 16:10:09 by dcasasol         #+#    #+#              */
/*   Updated: 2026/09/08 13:35:51 by dcasasol        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 4000

void	ft_puterr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(2, &str[i++], 1);
}

int	ft_open_file(char *filename)
{
	return (open(filename, O_RDONLY));
}

void	ft_read_file(int fd, char *buffer)
{
	int	rd;

	rd = read(fd, buffer, BUFFER_SIZE);
	while (rd > 0)
	{
		write(1, buffer, rd);
		rd = read(fd, buffer, BUFFER_SIZE);
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buffer[BUFFER_SIZE];

	if (argc == 1)
		ft_puterr("File name missing.\n");
	else if (argc > 2)
		ft_puterr("Too many arguments.\n");
	else
	{
		fd = ft_open_file(argv[1]);
		if (fd < 0)
			ft_puterr("Cannot read file.\n");
		else
		{
			ft_read_file(fd, buffer);
			close(fd);
		}
	}
	return (0);
}
