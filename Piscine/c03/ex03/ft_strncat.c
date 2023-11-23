/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:31:39 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/06 12:33:39 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_len(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j ;
	unsigned int	i;

	i = 0;
	j = ft_len(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

/*int main (int argc, char *argv[])
{
        if(argc > 2)
        {
                char  *i;
                i = ft_strncat(argv[1], argv[2], 2);
                printf("%s\n", i);
        }
}*/
