/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:48:55 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/03 10:48:59 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' & str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main (int argc , char *argv[])
{	
	int	i;
	
	if (argc > 1)
	{
		i = ft_str_is_numeric(argv[1]);
	}
		
	printf ("%d\n", i);
	return (1);
}*/
