/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 21:40:20 by ntardy            #+#    #+#             */
/*   Updated: 2019/06/25 12:04:14 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checkbase(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if ((base[i] == ' ') || (base[i] == '\n') || (base[i] == '\t')
			|| (base[i] == '\f') || (base[i] == '\v')
			|| (base[i] == '\r') || (base[i] == '+') || (base[i] == '-'))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_coresbase(char str, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ispace(char *str)
{
	int i;

	i = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t')
			|| (str[i] == '\f') || (str[i] == '\v') || (str[i] == '\r'))
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int pair;
	int r;
	int size;

	size = 0;
	r = 0;
	pair = 1;
	if (checkbase(base) == 0)
		return (0);
	while (base[size] != '\0')
		size++;
	i = ispace(str);
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			pair = -pair;
		i++;
	}
	while (ft_coresbase(str[i], base) != -1)
	{
		r = r * size + ft_coresbase(str[i], base);
		i++;
	}
	return (r * pair);
}
