/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:11:52 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/02 18:36:05 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 & str[i] <= 90
				|| str[i] >= 97 & str[i] <= 122))
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
	
	i = ft_str_is_alpha("sfd");
	
	printf ("%d\n", i);
	return (0);
}*/
