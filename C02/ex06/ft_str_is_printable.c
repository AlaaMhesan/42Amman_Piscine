/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhesan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:11:59 by amhesan           #+#    #+#             */
/*   Updated: 2024/05/05 16:12:30 by amhesan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	mark;

	i = 0;
	mark = 1;
	while (str[i] != 0)
	{
		if (str[i] > 31 && str[i] <= 127)
			i++;
		else
		{
			mark = 0;
			break ;
		}
	}
	return (mark);
}
