/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosoare <diosoare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:53:49 by diosoare          #+#    #+#             */
/*   Updated: 2026/02/11 19:08:42 by diosoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *num1, int *num2)
{
	*num1 = *num1 + *num2;
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;
}

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				sorted;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			sorted = 1;			
		}
		i++;
		if (sorted == 1)
		{
			i = 0;
			sorted = 0;			
		}
	}
}

int	main(void)
{
	int	tab[] = {5, 3, 1, 6, 2};	
	int	i;
	
	sort_int_tab(tab, 5);
	i = 0;
	while (i < 5)
		printf("%d", tab[i++]);
	return (0);
}