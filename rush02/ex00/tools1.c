/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 21:20:22 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/23 21:30:59 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		affichage(int i, int tmp, int tmp2, int j)
{
	if (j >= 1)
		ft_putstr(" || ");
	ft_putstr("[colle-0");
	ft_putchar((i) + '0');
	ft_putstr("] [");
	ft_putnbr(tmp);
	ft_putstr("] [");
	ft_putnbr(tmp2);
	ft_putstr("]");
	return (0);
}

char	*recup_str(int i, char reading[2])
{
	char *string;
	char *tmpstring;

	if (!(string = malloc(sizeof(char) * 2)))
		return (0);
	string[0] = '\0';
	while ((i = read(0, reading, 1)) > 0)
	{
		reading[i] = '\0';
		ft_strcat(string, reading);
		if (!(tmpstring = malloc(ft_strlen(string) + 1)))
			return (0);
		ft_strcpy(tmpstring, string);
		free(string);
		if (!(string = malloc(ft_strlen(tmpstring) + 2)))
			return (0);
		ft_strcpy(string, tmpstring);
		free(tmpstring);
	}
	return (&*string);
}
