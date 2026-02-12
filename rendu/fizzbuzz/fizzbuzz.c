/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diosoare <diosoare@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:11:16 by diosoare          #+#    #+#             */
/*   Updated: 2026/02/12 18:59:20 by diosoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prt_nbr(int	n)
{
	int		i;
	char	digit[11];
	ssize_t	nb;

	i = 10;
	nb = n;
	if (n < 0)
		nb *= 1;
	if (n == 0)
		write(1, "0", 1);
	while (nb)
	{
		digit[--i] = (nb % 10) + '0';
		nb /= 10;
	}
	write(1, &digit[i], 10 - i);
	write(1, "\n", 1);
}

void	fizzbuzz(void)
{
	int	digit;

	digit = 1;
	while (digit <= 100)
	{
		if (digit % 3 == 0 && digit % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (digit % 3 == 0)
			write(1, "fizz\n", 5);
		else if (digit % 5 == 0)
			write(1, "buzz\n", 5);
		else
			prt_nbr(digit);
		digit++;	
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}