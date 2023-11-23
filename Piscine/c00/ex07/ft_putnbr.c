/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <jesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:26:30 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/07 12:28:23 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long	nb_long;
	
	nb_long = nb;
	if (nb_long < 0)
	{
		ft_putchar('-');
		nb_long = -nb_long;
	}
	if (nb_long >= 10)
	{
		ft_putnbr(nb_long / 10);
	}
	ft_putchar(nb_long % 10 + '0');
}

// int     main ()
// {
//         ft_putnbr(-123450236);
//         return(0);
// }
