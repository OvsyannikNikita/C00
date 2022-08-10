/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:10:56 by novsiann          #+#    #+#             */
/*   Updated: 2022/08/01 13:04:27 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	innerblock(int a, int b)
{
	char	c;

	while (b < 100)
	{
		c = a / 10 + 48;
		write(1, &c, 1);
		c = a % 10 + 48;
		write(1, &c, 1);
		write(1, " ", 1);
		c = b / 10 + 48;
		write(1, &c, 1);
		c = b % 10 + 48;
		write(1, &c, 1);
		if (a < 98)
		{
			write(1, ", ", 2);
		}
		b++;
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		innerblock(a, b);
		a++;
	}
}
