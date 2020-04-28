/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 10:48:26 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/02 10:51:09 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int		i;
	int		retour;
	char	c;

	i = 0;
	retour = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 97 || c > 122)
		{
			retour = 0;
		}
		i++;
	}
	return (retour);
}
