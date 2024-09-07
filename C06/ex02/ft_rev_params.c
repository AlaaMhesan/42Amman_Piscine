/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amhesan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:27:36 by amhesan           #+#    #+#             */
/*   Updated: 2024/05/13 12:46:30 by amhesan          ###   ########.fr       */
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

	v = argc - 1;
	while (argv[v] && v > 0)
	{
		i = 0;
		while (argv[v][i])
		{
			ft_putchar(argv[v][i]);
			i++;
		}
		ft_putchar('\n');
		v--;
	}	
}
