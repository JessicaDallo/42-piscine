/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 09:25:43 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/03 09:26:01 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	change;

	change = *a;
	*a = *b;
	*b = change;
}
/*int main (void)
{
	int n;
	int n1;
	
	n = 9;
	n1 = 5;
	
	
	ft_swap (&n, &n1);
	printf("deveria ser 9 %d\n", n);
	printf("deveria ser 5 %d\n", n1);
	return (0);
}*/
