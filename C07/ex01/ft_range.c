/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhesan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:00:38 by amhesan           #+#    #+#             */
/*   Updated: 2024/05/14 18:40:24 by amhesan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = 0;
	i = 0;
	if (min >= max)
		return (arr);
	arr = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
