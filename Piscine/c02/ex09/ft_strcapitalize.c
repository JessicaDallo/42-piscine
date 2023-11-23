/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <jesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:14:10 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/04 10:55:11 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str[i] -= 32;
	while (str[i] != '\0')
	{
		if ((str[i + 1] >= 48 && str[i + 1] <= 57) && str[i] == 32)
		{
			i++;
		}
		else if (str[i + 1] >= 65 & str[i + 1] <= 90)
		{
			i++;
		}
		else if (((str[i] >= 32 && str[i] <= 47)
				|| (str[i] >= 58 && str[i] <= 64)
				|| (str[i] >= 91 && str[i] <= 96)
				|| (str[i] >= 123 && str[i] <= 126)) && str[i + 1] != 32)
		{
			str[i + 1] = str[i +1] - 32;
		}
		i++;
	}
	return (str);
}
/*int main ()
{
        char    str[] = "ola, Tudo bem? 235 oi+pedro+pedra-Pedro";
        printf("%s", ft_strcapitalize(str));
        return 0;
}*/
