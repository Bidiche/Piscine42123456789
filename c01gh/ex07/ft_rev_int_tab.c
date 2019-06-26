/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:48:02 by ntardy            #+#    #+#             */
/*   Updated: 2019/06/11 16:12:21 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tableau[size];

	i = 0;
	j = size - 1;
	while (i < size)
	{
		tableau[j] = tab[i];
		i++;
		j--;
	}
	i = 0;
	j = 0;
	while (i < size)
	{
		tab[i] = tableau[j];
		i++;
		j++;
	}
}
