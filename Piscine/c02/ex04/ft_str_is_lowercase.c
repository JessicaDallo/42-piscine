/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:47:56 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/03 11:56:38 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' & str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main ()
{	
	int	i;
	
	i = ft_str_is_lowercase("sdfsd");
	
	printf ("%d\n", i);
	return (0);
}*/
