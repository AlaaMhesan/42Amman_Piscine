/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhesan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:10:09 by amhesan           #+#    #+#             */
/*   Updated: 2024/05/18 13:56:05 by amhesan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	reslen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i++])
			count++;
		i = 0;
		if (j < size - 1)
			while (sep[i++])
				count++;
		j++;
	}
	return (count + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		n;
	char	*res;

	n = 0;
	j = 0;
	res = (char *) malloc(sizeof(char) * reslen(size, strs, sep));
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			res[n++] = strs[j][i++];
		i = 0;
		if (j < size - 1)
			while (sep[i])
				res[n++] = sep[i++];
		j++;
	}
	res[n] = '\0';
	return (res);
}
