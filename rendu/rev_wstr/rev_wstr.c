/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosoare <diosoare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 21:03:48 by diosoare          #+#    #+#             */
/*   Updated: 2026/02/12 21:36:29 by diosoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int start;
	int	end;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			while (argv[1][i] == ' ')
				i++;
			start = i;
			while (argv[1][i] && argv[1][i] != ' ')
				i++;
			end = i - 1;
			if (start <= end)
			{
				int j = end;
				while (j >= start)
					write(1, &argv[1][j--], 1);
				if (argv[1][i])
					write(1, " ", 1);
			}
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
