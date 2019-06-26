/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 13:53:51 by ntardy            #+#    #+#             */
/*   Updated: 2019/06/25 11:55:23 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_check_base(char *base)
{
	int i;
	int y;

	i = 0;
	if ((base[0] == '\0') || (base[1] == '\0'))
		return (0);
	while (base[i] != '\0')
	{
		y = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[y] != '\0')
		{
			if (base[y] == base[i])
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int len;

	len = ft_strlen(base);
	if (ft_check_base(base) == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			if (nbr < -2147483647)
			{
				ft_putnbr_base((nbr / len) * -1, base);
				ft_putnbr_base((nbr % len) * -1, base);
			}
			else
				ft_putnbr_base((-nbr), base);
		}
		else if (nbr >= 0 && nbr < len)
			ft_putchar(base[nbr]);
		else
		{
			ft_putnbr_base((nbr / len), base);
			ft_putnbr_base((nbr % len), base);
		}
	}
}
