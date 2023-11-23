/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:39:35 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/12 14:55:56 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	x;

	x = 0;
	if (nb <= 1)
	{
		return (2);
	}
	if (ft_is_prime(nb) == 1)
	{
		return (nb);
	}
	while (x != 1)
	{
		nb++;
		x = ft_is_prime(nb);
	}
	return (nb);
}
/*int main ()
{
	printf("%d", ft_find_next_prime(8));
	return (0);
}*/
