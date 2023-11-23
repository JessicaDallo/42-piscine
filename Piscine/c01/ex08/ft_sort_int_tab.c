/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:27:47 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/02 12:28:07 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				i = 0;
			}
		else
			i++;
	}
}

// int main()
// {
// 	int tab[6] ={0,5,3,1,2,4};
// 	int size = 6;

// 	ft_sort_int_tab(tab, size);
// 	printf("%d, %d, %d, %d, %d, %d",tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
// 	return 0;
// }