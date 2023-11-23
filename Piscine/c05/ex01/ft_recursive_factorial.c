/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 06:53:52 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/14 06:53:58 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb *= ft_recursive_factorial(nb - 1));
}

/*int main(int argc, char *argv[])
{
        if(argc == 2)
        {
        printf("%d",  ft_recursive_factorial(atoi(argv[1])));
        }
        return (0);
}*/
