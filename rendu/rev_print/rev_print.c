/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosoare <diosoare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 22:39:01 by diosoare          #+#    #+#             */
/*   Updated: 2026/02/11 22:45:31 by diosoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	
	if (argc == 2)
	{
	i = 0;
	while (argv[1][i])
		i++;
	while (i--)
		write(1, &argv[1][i], 1);
	write(1, "\n", 1);	
	return (0);	
	}
	else
		write(1, "\n", 1);
	return (0);
}
	
