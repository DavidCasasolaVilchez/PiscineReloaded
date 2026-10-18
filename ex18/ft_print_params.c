/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_params.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: dcasasol <dcasasol@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/07 14:42:40 by dcasasol         #+#    #+#              */
/*   Updated: 2026/09/07 14:45:20 by dcasasol        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc < 2)
		return (0);
	else
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				ft_putchar(argv[i][j++]);
			}
			ft_putchar('\n');
			i++;
		}
	}
}
