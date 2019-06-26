/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 22:32:28 by ntardy            #+#    #+#             */
/*   Updated: 2019/06/16 23:17:14 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	k = 0;
	while (*(src + k) != '\0')
		k++;
	if (size <= i)
		k += size;
	else
		k += i;
	j = 0;
	while (*(src + j) != '\0' && i + 1 < size)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (k);
}
