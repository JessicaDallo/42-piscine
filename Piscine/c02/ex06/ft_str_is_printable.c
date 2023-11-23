/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:11:08 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/03 13:12:12 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 & str[i] <= 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	int	i;
	
	i =  ft_str_is_printable(" ");
	printf ("%d\n", i);
	return (0);

}*/
