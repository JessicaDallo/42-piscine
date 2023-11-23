/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:15:38 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/11 10:53:11 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	result = 1;
	while (power-- > 0)
		result *= nb;
	return (result);
}
/*int   main ()
{
        int     i;

        i = ft_iterative_power(8, 2);
        printf("%d\n", i);
        return (0);
}*/
