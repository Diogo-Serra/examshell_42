/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosoare <diosoare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 21:03:48 by diosoare          #+#    #+#             */
/*   Updated: 2026/02/12 21:40:20 by diosoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int start;
	int	end;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
			i++;
		while (i >= 0)
		{
			while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i--;
			end = i;
			while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			start = i + 1;
			if (start <= end)
			{
				int j = start;
				while (j <= end)
					write(1, &argv[1][j++], 1);
				if (i >= 0)
					write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
