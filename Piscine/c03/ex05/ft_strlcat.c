/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <jesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:23:03 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/06 19:08:19 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	slen;
	unsigned int	dlen;
	unsigned int	i;

	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	i = 0;
	if (size == 0 || size <= dlen)
	{
		return (size + slen);
	}
	while (i < size - 1 - dlen)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (slen + dlen);
}

/*int main (int argc, char *argv[])
{
	if (argc > 2)
	{
		unsigned int i;
		i =  ft_strlcat(argv[1], argv[2] , 10);
		//printf ("%d\n", i);
		printf ("%s", argv[1]);
	}
	return(0);
}*/
