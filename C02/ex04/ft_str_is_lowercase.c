/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhesan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:01:06 by amhesan           #+#    #+#             */
/*   Updated: 2024/05/05 16:08:43 by amhesan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	mark;

	i = 0;
	mark = 1;
	while (str[i] != 0)
	{
		if (str[i] > 96 && str[i] < 123)
			i++;
		else
		{
			mark = 0;
			break ;
		}
	}
	return (mark);
}
