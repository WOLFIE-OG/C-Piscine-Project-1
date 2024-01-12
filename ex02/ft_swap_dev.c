/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:53:25 by otodd             #+#    #+#             */
/*   Updated: 2023/10/10 11:07:13 by otodd            ###   ########.fr       */
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

void	ft_swap(int *a, int *b)
{
	int	temp;

	ft_putnbr(*a);
	ft_putchar('\n');
	ft_putnbr(*b);
	ft_putchar('\n');
	temp = *a;
	*a = *b;
	*b = temp;
	
	ft_putnbr(*a);
	ft_putchar('\n');
	ft_putnbr(*b);
	ft_putchar('\n');

	
}

int	main(void)
{
	int	*n1;
	int	*n2;
	int	n3;
	int	n4;

	n3 = 1;
	n4 = 23;
	
	n1 = &n3;
	n2 = &n4;

	ft_swap(n1, n2);
	return (0);
}
