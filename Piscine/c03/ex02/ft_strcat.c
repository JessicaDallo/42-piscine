/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:25:08 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/06 10:28:19 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_len(char	*dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	i;

	i = (0);
	j = ft_len(dest);
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

/*int	main (int argc, char *argv[])
{
        if(argc > 2)
        {
                char  *i;
                i = ft_strcat(argv[1], argv[2]);
                printf("%s\n", i);
        }

}*/
