/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 09:20:24 by jesilva-          #+#    #+#             */
/*   Updated: 2023/08/30 12:26:17 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main(void)
{
	int a = 10;
	int b = 3;

	a = 10;
	b = 3;
	printf("valor inicial -> a: %d, b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("valor de x %d, valor de y %d", a, b);
}*/
