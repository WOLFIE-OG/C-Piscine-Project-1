/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:51:01 by otodd             #+#    #+#             */
/*   Updated: 2023/10/10 11:53:27 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fr_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		fr_putchar(*str);
		str++;
	}
}

int	main(void)
{
	char	*test;

	test = "THIS IS A TEST STRING";
	ft_putstr(test);
	return (0);
}
