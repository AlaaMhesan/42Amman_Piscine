/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhesan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:05:19 by amhesan           #+#    #+#             */
/*   Updated: 2024/05/05 16:10:18 by amhesan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	mark;

	i = 0;
	mark = 1;
	while (str[i] != 0)
	{
		if (str[i] > 64 && str[i] < 91)
			i++;
		else
		{
			mark = 0;
			break ;
		}
	}
	return (mark);
}
