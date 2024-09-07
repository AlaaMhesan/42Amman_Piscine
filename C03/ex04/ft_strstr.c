/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhesan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:52:10 by amhesan           #+#    #+#             */
/*   Updated: 2024/05/07 19:45:44 by amhesan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	h;
	int	n;

	h = 0;
	n = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[h] != '\0')
	{
		while (str[h + n] == to_find[n] && str[h + n] != '\0')
			n++;
		if (to_find[n] == '\0')
			return (str + h);
		h++;
		n = 0;
	}
	return (0);
}
