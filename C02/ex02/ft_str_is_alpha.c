/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhesan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:01:33 by amhesan           #+#    #+#             */
/*   Updated: 2024/05/04 18:45:16 by amhesan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	mark;

	i = 0;
	mark = 1;
	while (str[i] != 0)
	{
		if (str[i] > 64 && str[i] < 91)
			i++;
		else if (str[i] > 96 && str[i] < 123)
			i++;
		else
		{
			mark = 0;
			break ;
		}
	}
	return (mark);
}
