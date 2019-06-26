/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:44:03 by ntardy            #+#    #+#             */
/*   Updated: 2019/06/13 14:27:35 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (65 <= str[i] && str[i] <= 90)
			str[i] = (str[i] + 32);
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (97 <= str[0] && str[0] <= 122)
			str[0] = str[0] - 32;
		if (97 <= str[i] && str[i] <= 122)
		{
			if ((str[i - 1] < 48) || ((str[i - 1] > 57)
						&& (str[i - 1] < 65)) || ((str[i - 1] > 90)
						&& (str[i - 1] < 97)) || (str[i - 1] > 122))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
