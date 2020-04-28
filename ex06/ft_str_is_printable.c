/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:21:35 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/04 02:36:27 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		i;
	int		retour;
	char	c;

	i = 0;
	retour = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c <= 31 || c == 127)
		{
			retour = 0;
		}
		i++;
	}
	return (retour);
}
