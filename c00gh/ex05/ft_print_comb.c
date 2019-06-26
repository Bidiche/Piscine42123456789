/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:49:31 by ntardy            #+#    #+#             */
/*   Updated: 2019/06/09 18:33:58 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_1(char c, char e)
{
	write(1, &c, 1);
	write(1, &e, 1);
}

void	ft_putchar(char c, char e, char f)
{
	write(1, &c, 1);
	write(1, &e, 1);
	write(1, &f, 1);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	b = a + 1;
	c = b + 1;
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				if (a < '7')
					ft_putchar_1(',', ' ');
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a;
	}
}
