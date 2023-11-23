/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:40:08 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/10 12:42:15 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb != 0 && nb > 0)
	{
		i = i -1; 
		while (i != 0)
		{
			nb = nb * i;
			i--;
		}
		return (nb);
	}
	else if (nb == 0) 
	{
		return (1);
	}
	return (0);
}

/*int main(int argc, char *argv[])
{
	if(argc == 2)
	{
	printf("%d",  ft_iterative_factorial(atoi(argv[1])));
	}
	return (0);
}*/
