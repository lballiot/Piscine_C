/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 15:18:04 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/26 10:40:27 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int result;

	result = 0;
	while (str[result] != '\0')
	{
		result++;
	}
	return (result);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		result;
	char	*concat;

	i = 1;
	result = 0;
	while (argv[i])
	{
		result += ft_strlen(argv[i]);
		i++;
	}
	if (!(concat = malloc(sizeof(char) * result + (argc - 1))))
		return (NULL);
	i = 1;
	while (argv[i])
	{
		concat = ft_strcat(concat, argv[i]);
		if (i + 1 < argc)
			concat = ft_strcat(concat, "\n");
		i++;
	}
	return (concat);
}
