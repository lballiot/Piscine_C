/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 21:20:44 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/23 21:27:50 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int		colle_00(int *tab, char *string)
{
	char *str;

	if (!(str = malloc(sizeof(char) * ((tab[1] * tab[2]) + tab[2] + 1))))
		return (0);
	str[0] = '\0';
	str = colle00(tab[1], tab[2], str);
	if (ft_strcmp(str, string) == 0)
	{
		affichage(tab[3], tab[1], tab[2], tab[4]);
		free(str);
		return (2);
	}
	free(str);
	return (1);
}

int		colle_01(int *tab, char *string)
{
	char *str;

	if (!(str = malloc(sizeof(char) * ((tab[1] * tab[2]) + tab[2] + 1))))
		return (0);
	str[0] = '\0';
	str = colle01(tab[1], tab[2], str);
	if (ft_strcmp(str, string) == 0)
	{
		affichage(tab[3], tab[1], tab[2], tab[4]);
		free(str);
		return (2);
	}
	free(str);
	return (1);
}

int		colle_02(int *tab, char *string)
{
	char *str;

	if (!(str = malloc(sizeof(char) * ((tab[1] * tab[2]) + tab[2] + 1))))
		return (0);
	str[0] = '\0';
	str = colle02(tab[1], tab[2], str);
	if (ft_strcmp(str, string) == 0)
	{
		affichage(tab[3], tab[1], tab[2], tab[4]);
		free(str);
		return (2);
	}
	free(str);
	return (1);
}

int		colle_03(int *tab, char *string)
{
	char *str;

	if (!(str = malloc(sizeof(char) * ((tab[1] * tab[2]) + tab[2] + 1))))
		return (0);
	str[0] = '\0';
	str = colle03(tab[1], tab[2], str);
	if (ft_strcmp(str, string) == 0)
	{
		affichage(tab[3], tab[1], tab[2], tab[4]);
		free(str);
		return (2);
	}
	free(str);
	return (1);
}

int		colle_04(int *tab, char *string)
{
	char *str;

	if (!(str = malloc(sizeof(char) * ((tab[1] * tab[2]) + tab[2] + 1))))
		return (0);
	str[0] = '\0';
	str = colle04(tab[1], tab[2], str);
	if (ft_strcmp(str, string) == 0)
	{
		affichage(tab[3], tab[1], tab[2], tab[4]);
		free(str);
		return (2);
	}
	free(str);
	return (1);
}
