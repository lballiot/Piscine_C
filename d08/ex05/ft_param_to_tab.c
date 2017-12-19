/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 17:27:08 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/27 11:41:32 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	if (!(dest = malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct		s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	tmp;
	t_stock_par	*result;
	int			i;
	int			j;

	i = 1;
	j = 0;
	if (ac == 1)
		return (0);
	if (!(result = (t_stock_par*)malloc(sizeof(*result) * ac)))
		return (0);
	while (av[i])
	{
		tmp.size_param = ft_strlen(av[i]);
		tmp.str = av[i];
		tmp.copy = ft_strdup(av[i]);
		tmp.tab = ft_split_whitespaces(&av[i][0]);
		result[j++] = tmp;
		i++;
	}
	return (result);
}
