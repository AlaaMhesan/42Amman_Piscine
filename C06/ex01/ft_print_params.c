/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhesan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:01:15 by amhesan           #+#    #+#             */
/*   Updated: 2024/05/13 13:05:07 by amhesan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	v;

	if (argc == 0)
		return (1);
	v = 1;
	while (argv[v])
	{
		i = 0;
		while (argv[v][i])
		{
			ft_putchar(argv[v][i]);
			i++;
		}
		ft_putchar('\n');
		v++;
	}
}
