/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhesan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:06:02 by amhesan           #+#    #+#             */
/*   Updated: 2024/05/11 19:43:08 by amhesan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	counter;

	i = 0;
	sign = 1;
	counter = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] != 0 && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] != 0 && str[i] >= 48 && str[i] <= 57)
	{
		counter *= 10;
		counter += str[i] - 48;
		i++;
	}
	counter *= sign;
	return (counter);
}
