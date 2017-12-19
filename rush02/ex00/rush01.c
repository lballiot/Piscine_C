/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 21:37:51 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/23 21:39:04 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

char	*ft_print_top_line01(int x, char *str)
{
	int i;

	i = 1;
	str = ft_strcat(str, "/");
	while (i < (x - 1))
	{
		str = ft_strcat(str, "*");
		++i;
	}
	str = ft_strcat(str, "\\");
	str = ft_strcat(str, "\n");
	return (str);
}

char	*ft_print_middle_line01(int x, char *str)
{
	int i;

	i = 1;
	str = ft_strcat(str, "*");
	while (i < (x - 1))
	{
		str = ft_strcat(str, " ");
		++i;
	}
	str = ft_strcat(str, "*");
	str = ft_strcat(str, "\n");
	return (str);
}

char	*ft_print_bottom_line01(int x, char *str)
{
	int i;

	i = 1;
	str = ft_strcat(str, "\\");
	while (i < (x - 1))
	{
		str = ft_strcat(str, "*");
		++i;
	}
	str = ft_strcat(str, "/");
	str = ft_strcat(str, "\n");
	return (str);
}

char	*ft_print_vertical_line01(int y, char *str)
{
	int i;

	i = 1;
	str = ft_strcat(str, "/");
	str = ft_strcat(str, "\n");
	while (i < (y - 1))
	{
		str = ft_strcat(str, "*");
		str = ft_strcat(str, "\n");
		i++;
	}
	str = ft_strcat(str, "\\");
	str = ft_strcat(str, "\n");
	return (str);
}

char	*colle01(int x, int y, char *str)
{
	int i;

	i = 1;
	if (x == 1 && y == 1)
	{
		str = ft_strcat(str, "*");
		str = ft_strcat(str, "*");
	}
	else if (x == 1 && y > 0)
		str = ft_print_vertical_line01(y, str);
	else if (y == 1 && x > 0)
		str = ft_print_top_line01(x, str);
	else if (x > 1 && y > 1)
	{
		str = ft_print_top_line01(x, str);
		if (y > 2)
			str = ft_print_middle_line01(x, str);
		while (++i < (y - 1))
			str = ft_print_middle_line01(x, str);
		if (y > 1 && x > 0)
			str = ft_print_bottom_line01(x, str);
	}
	return (str);
}
