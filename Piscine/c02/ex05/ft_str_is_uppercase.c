/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:43:24 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/03 12:59:55 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' & str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	int i;
	i =  ft_str_is_uppercase("sd");
	printf ("%d\n", i);
	return (0);

}*/
