/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 21:39:45 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/23 21:42:12 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

char	*ft_print_top_line00(int x, char *str)
{
	int i;

	i = 1;
	ft_strcat(str, "o");
	while (i < (x - 1))
	{
		ft_strcat(str, "-");
		++i;
	}
	ft_strcat(str, "o");
	ft_strcat(str, "\n");
	return (str);
}

char	*ft_print_middle_line00(int x, char *str)
{
	int i;

	i = 1;
	ft_strcat(str, "|");
	while (i < (x - 1))
	{
		ft_strcat(str, " ");
		++i;
	}
	ft_strcat(str, "|");
	ft_strcat(str, "\n");
	return (str);
}

char	*ft_print_bottom_line00(int x, char *str)
{
	int i;

	i = 1;
	ft_strcat(str, "o");
	while (i < (x - 1))
	{
		ft_strcat(str, "-");
		++i;
	}
	ft_strcat(str, "o");
	ft_strcat(str, "\n");
	return (str);
}

char	*ft_print_vertical_line00(int y, char *str)
{
	int i;

	i = 1;
	ft_strcat(str, "o");
	ft_strcat(str, "\n");
	while (i < (y - 1))
	{
		ft_strcat(str, "|");
		ft_strcat(str, "\n");
		i++;
	}
	ft_strcat(str, "o");
	ft_strcat(str, "\n");
	return (str);
}

char	*colle00(int x, int y, char *str)
{
	int i;

	i = 1;
	if (x == 1 && y == 1)
	{
		ft_strcat(str, "o");
		ft_strcat(str, "\n");
	}
	else if (x == 1 && y > 0)
		ft_print_vertical_line00(y, str);
	else if (y == 1 && x > 0)
		ft_print_top_line00(x, str);
	else if (x > 1 && y > 1)
	{
		ft_print_top_line00(x, str);
		if (y > 2)
			ft_print_middle_line00(x, str);
		while (++i < (y - 1))
			ft_print_middle_line00(x, str);
		if (y > 1 && x > 0)
			ft_print_bottom_line00(x, str);
	}
	return (str);
}
