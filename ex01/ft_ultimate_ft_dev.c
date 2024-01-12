/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:59:37 by otodd             #+#    #+#             */
/*   Updated: 2023/10/10 10:40:57 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_helpers.c"

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
	ft_putnbr(*********nbr);
	
}

int	main(void)
{
	int	n;
	int	*ptr;
	int	**ptr1;
	int	***ptr2;
	int	****ptr3;
	int	*****ptr4;
	int	******ptr5;
	int	*******ptr6;
	int	********ptr7;
	
	n = 42;
	ptr = &n;
	ptr1 = &ptr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;

	ft_ultimate_ft(&ptr7);
	return (0);
}
