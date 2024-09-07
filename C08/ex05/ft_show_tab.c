/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsaleh <amsaleh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:18:11 by amsaleh           #+#    #+#             */
/*   Updated: 2024/05/13 16:46:09 by amsaleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

int	str_to_int_func(int *arr, int nb, int *check)
{
	int	i;
	int	temp;

	temp = nb;
	i = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return (0);
		}
		temp = -temp;
		*check = 1;
	}
	while (temp > 0)
	{
		arr[i] = temp % 10 + 48;
		temp /= 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	int	i;
	int	arr[10];
	int	check;

	i = 0;
	check = 0;
	if (nb == 0)
		ft_putchar('0');
	i = str_to_int_func(arr, nb, &check);
	if (check)
		ft_putchar('-');
	while (i > 0)
	{
		ft_putchar(arr[i - 1]);
		i--;
	}
}

void	ft_show_tab(t_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
