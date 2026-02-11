/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosoare <diosoare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:17:06 by diosoare          #+#    #+#             */
/*   Updated: 2026/02/11 15:44:36 by diosoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	count;

	if (argc > 1)
	{
		count = 1;		
		while (count < argc)
		{
			i = 0;
			while (argv[1][i])
			{
				if (argv[1][i] != ' ' && (argv[1][i + 1] == ' ' || !argv[1][i + 1]))
				{
					if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
						argv[1][i] -= 32;
					write(1, &argv[1][i++], 1);	
				}
				else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				{
					argv[1][i] += 32;
					write(1, &argv[1][i++], 1);
				}
				else
					write(1, &argv[1][i++], 1);
			}
			write(1, "\n", 1);
			count++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}