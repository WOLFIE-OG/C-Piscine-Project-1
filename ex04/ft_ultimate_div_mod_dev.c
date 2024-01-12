/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:53:25 by otodd             #+#    #+#             */
/*   Updated: 2023/10/10 11:47:22 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp2;
	
	temp = *a;
	temp2 = *b;
	*a = temp / temp2;
	*b = temp % temp2;
}

int	main(void)
{
	int	val;
	int	val2;
	int	*val_d;
	int	*val_m;
	
	val = 38567;
	val2 = 40;
	val_d = &val;
	val_m = &val2;
	
	ft_putchar('\n');
	ft_putnbr(*val_d);
	ft_putchar('\n');
	ft_putnbr(*val_m);
	ft_putchar('\n');

	ft_ultimate_div_mod(val_d, val_m);
	
	ft_putchar('\n');
	ft_putnbr(*val_d);
	ft_putchar('\n');
	ft_putnbr(*val_m);
	ft_putchar('\n');

	return (0);
}
