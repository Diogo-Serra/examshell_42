/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosoare <diosoare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 19:16:06 by diosoare          #+#    #+#             */
/*   Updated: 2026/02/12 21:01:33 by diosoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	temp;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		if (a > 0 && b > 0)
		{
			while (b != 0)
			{
				temp = b;
				b = a % b;
				a = temp;
			}
			printf("%d\n", a);
		}
	}
	else
		printf("\n");
	return (0);
}