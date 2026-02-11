/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosoare <diosoare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:38:57 by diosoare          #+#    #+#             */
/*   Updated: 2026/02/11 18:40:43 by diosoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			while (argv[1][i] == ' ' || (argv[1][i] >= 9 && argv[1][i] <= 13))
				i++;
			while (argv[1][i] && argv[1][i] != ' ')
				write(1, &argv[1][i++], 1);
			while (argv[1][i] == ' ' || (argv[1][i] >= 9 && argv[1][i] <= 13))
			{
				if (argv[1][i + 1] != ' ' && argv[1][i + 1])
					write(1, " ", 1);
				i++;
			}
		}
		write(1, "\n", 1);		
	}
	else
		write(1, "\n", 1);
	return (0);
}
