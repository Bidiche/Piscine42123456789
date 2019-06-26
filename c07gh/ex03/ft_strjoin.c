/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 00:20:39 by ntardy            #+#    #+#             */
/*   Updated: 2019/06/25 22:40:56 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		sstrjoin(int size, char **strs, char *sep)
{
	int i;
	int j;
	int sa;

	i = 0;
	j = 0;
	sa = 0;
	while (sep[sa] != '\0')
		sa++;
	sa = sa * (size - 1);
	while (j < size)
	{
		while (strs[j][i] != '\0')
		{
			sa++;
			i++;
		}
		j++;
		i = 0;
	}
	return (sa);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

void	creat_tab(int size, char **strs, char *sep, char *tab)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (j != size)
	{
		tab = ft_strcat(tab, strs[j]);
		if (j != size - 1)
			tab = ft_strcat(tab, sep);
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;

	i = sstrjoin(size, strs, sep);
	if (size == 0)
	{
		if (!(tab = malloc(sizeof(*tab) * 1)))
			return (0);
		tab[0] = '\0';
	}
	else
	{
		if (!(tab = malloc(sizeof(*tab) * i + 1)))
			return (0);
		tab[0] = '\0';
		creat_tab(size, strs, sep, tab);
	}
	return (tab);
}
