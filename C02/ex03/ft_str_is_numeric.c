/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhesan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:48:24 by amhesan           #+#    #+#             */
/*   Updated: 2024/05/04 18:53:30 by amhesan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	mark;

	i = 0;
	mark = 1;
	while (str[i] != 0)
	{
		if (str[i] > 47 && str[i] < 58)
			i++;
		else
		{
			mark = 0;
			break ;
		}
	}
	return (mark);
}
