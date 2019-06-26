/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 23:35:17 by ntardy            #+#    #+#             */
/*   Updated: 2019/06/18 22:57:44 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		impair(int pair)
{
	if (pair % 2 != 0)
	{
		return (-42);
	}
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int pair;
	int r;

	r = 0;
	i = 0;
	pair = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t')
			|| (str[i] == '\f') || (str[i] == '\v') || (str[i] == '\r'))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			pair++;
		i++;
	}
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		r = r * 10;
		r = r + str[i] - 48;
		i++;
	}
	if (-42 == impair(pair))
		r = r * (-1);
	return (r);
}
