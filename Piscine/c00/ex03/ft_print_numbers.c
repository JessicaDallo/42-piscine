/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:48:35 by jesilva-          #+#    #+#             */
/*   Updated: 2023/08/25 11:48:39 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '0'; 
	while (c <= '9')
	{
		write (1, &c, 1);
		c++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
}*/
