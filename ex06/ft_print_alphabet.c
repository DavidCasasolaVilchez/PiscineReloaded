/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_print_alphabet.c                               :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: dcasasol <dcasasol@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/07 13:04:59 by dcasasol         #+#    #+#              */
/*   Updated: 2026/09/07 13:04:59 by dcasasol        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}
