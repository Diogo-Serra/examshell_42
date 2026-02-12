/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosoare <diosoare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 22:29:38 by diosoare          #+#    #+#             */
/*   Updated: 2026/02/12 22:37:48 by diosoare         ###   ########.fr       */
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
		{
			if (argv[1][i] == 'Z')
				argv[1][i] = 'A';
			else if (argv[1][i] == 'z')
				argv[1][i] = 'a';
			else if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z') ||
				(argv[1][i] >= 'a' && argv[1][i] <= 'z'))
					argv[1][i] += 1;
			write(1, &argv[1][i++], 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
