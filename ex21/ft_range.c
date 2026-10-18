/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_range.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: dcasasol <dcasasol@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/07 15:35:51 by dcasasol         #+#    #+#              */
/*   Updated: 2026/09/07 15:35:51 by dcasasol        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*list;
	int	i;

	if (min >= max)
		return (NULL);
	list = malloc(sizeof(int) * (max - min));
	if (list == 0)
		return (NULL);
	i = 0;
	while (min < max)
		list[i++] = min++;
	return (list);
}
