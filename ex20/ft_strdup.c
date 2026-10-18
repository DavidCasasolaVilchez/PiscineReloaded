/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: dcasasol <dcasasol@student.42malaga.com>  #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/07 15:00:06 by dcasasol         #+#    #+#              */
/*   Updated: 2026/09/07 15:24:13 by dcasasol        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ns;
	int		i;

	i = 0;
	ns = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (ns == 0)
		return (NULL);
	while (src[i])
	{
		ns[i] = src[i];
		i++;
	}
	return (ns);
}
