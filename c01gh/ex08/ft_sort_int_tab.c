/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:13:06 by ntardy            #+#    #+#             */
/*   Updated: 2019/06/11 22:01:59 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 1;
	while (i < size)
	{
		j = i;
		while (j >= 1 && tab[j] < tab[j - 1])
		{
			ft_swap(&(tab[j]), &(tab[j - 1]));
			j--;
		}
		i++;
	}
}
