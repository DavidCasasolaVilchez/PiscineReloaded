/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_sort_params.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: dcasasol <dcasasol@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/07 14:59:10 by dcasasol         #+#    #+#              */
/*   Updated: 2026/09/07 16:17:07 by dcasasol        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] > s2[i])
		return (1);
	if (s1[i] < s2[i])
		return (-1);
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

char	**ft_sort_array(int argc, char **argv)
{
	char	*i;
	int		j;

	while (argc > 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				i = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = i;
			}
			j++;
		}
		argc--;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		return (0);
	else
	{
		while (ft_sort_array(argc, argv)[i])
		{
			ft_putstr(argv[i++]);
			ft_putchar('\n');
		}
	}
	return (0);
}
