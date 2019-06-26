/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:44:26 by ntardy            #+#    #+#             */
/*   Updated: 2019/06/20 23:18:37 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int r;

	if (power == 0)
	{
		r = 1;
		return (r);
	}
	else if (power == 1)
	{
		r = nb;
		return (r);
	}
	else
	{
		if (power > 1)
		{
			r = nb * ft_recursive_power(nb, (power - 1));
			return (r);
		}
	}
	return (0);
}
