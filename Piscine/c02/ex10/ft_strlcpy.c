/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jesilva- <jesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:12:43 by jesilva-          #+#    #+#             */
/*   Updated: 2023/09/04 11:07:54 by jesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int ft_strlen(char *str)
{
   int i;
   i = 0;
   while (str[i] != '\0')
      i++;
   return(0);
}

unsigned	int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = ft_strlen(src);
	i = 0;
 	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return(size);	
}

int main ()
{
	char src[] = "Ooi tudo bem?";
	char dest[] = "sim e voce?";
	ft_strlcpy(dest, src, 5);
	printf("%s", dest);
	
	return(0);
}
