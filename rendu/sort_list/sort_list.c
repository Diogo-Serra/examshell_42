/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosoare <diosoare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 22:41:34 by diosoare          #+#    #+#             */
/*   Updated: 2026/02/12 23:17:24 by diosoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;	
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*current;

	current = lst;
	while (lst && current->next)
	{
		if ((cmp(current->data, current->next->data) == 0))
		{
			ft_swap(&current->data, &current->next->data);
			current = lst;
		}
		else
			current = current->next;
	}
	return (lst);		
}
