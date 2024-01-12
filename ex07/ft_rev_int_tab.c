/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <otodd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:15:00 by otodd             #+#    #+#             */
/*   Updated: 2024/01/12 16:30:58 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
		
}

int	ft_int_array_size(int *int_a)
{
	int	count;

	while (*int_a)
	{
		count++;
		int_a++;
	}
	return (count);
}

int	main(void)
{
	int	*tab;

	tab[55555] = {1, 2, 3, 4, 5};
	printf("%d\n", ft_int_array_size(tab));
	// ft_rev_int_tab(tab, 5);
	return (0);
}
