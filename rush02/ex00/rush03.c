/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 21:36:36 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/23 21:36:40 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

char	*ft_print_top_line03(int x, char *str)
{
	int i;

	i = 1;
	str = ft_strcat(str, "A");
	while (i < (x - 1))
	{
		str = ft_strcat(str, "B");
		++i;
	}
	str = ft_strcat(str, "C");
	str = ft_strcat(str, "\n");
	return (str);
}

char	*ft_print_middle_line03(int x, char *str)
{
	int i;

	i = 1;
	str = ft_strcat(str, "B");
	while (i < (x - 1))
	{
		str = ft_strcat(str, " ");
		++i;
	}
	str = ft_strcat(str, "B");
	str = ft_strcat(str, "\n");
	return (str);
}

char	*ft_print_bottom_line03(int x, char *str)
{
	int i;

	i = 1;
	str = ft_strcat(str, "A");
	while (i < (x - 1))
	{
		str = ft_strcat(str, "B");
		++i;
	}
	str = ft_strcat(str, "C");
	str = ft_strcat(str, "\n");
	return (str);
}

char	*ft_print_vertical_line03(int y, char *str)
{
	int i;

	i = 1;
	str = ft_strcat(str, "A");
	str = ft_strcat(str, "\n");
	while (i < (y - 1))
	{
		str = ft_strcat(str, "B");
		str = ft_strcat(str, "\n");
		i++;
	}
	str = ft_strcat(str, "A");
	str = ft_strcat(str, "\n");
	return (str);
}

char	*colle03(int x, int y, char *str)
{
	int i;

	i = 1;
	if (x == 1 && y == 1)
	{
		str = ft_strcat(str, "A");
		str = ft_strcat(str, "\n");
	}
	else if (x == 1 && y > 0)
		ft_print_vertical_line03(y, str);
	else if (y == 1 && x > 0)
		ft_print_top_line03(x, str);
	else if (x > 1 && y > 1)
	{
		ft_print_top_line03(x, str);
		if (y > 2)
			ft_print_middle_line03(x, str);
		while (++i < (y - 1))
			ft_print_middle_line03(x, str);
		if (y > 1 && x > 0)
			ft_print_bottom_line03(x, str);
	}
	return (str);
}
