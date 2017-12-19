/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisdrah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 22:03:04 by mmisdrah          #+#    #+#             */
/*   Updated: 2017/07/23 21:44:09 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	fonction(int *tab, char *string)
{
	if (colle_00(tab, string) == 2)
		tab[4]++;
	tab[3]++;
	if (colle_01(tab, string) == 2)
		tab[4]++;
	tab[3]++;
	if (colle_02(tab, string) == 2)
		tab[4]++;
	tab[3]++;
	if (colle_03(tab, string) == 2)
		tab[4]++;
	tab[3]++;
	if (colle_04(tab, string) == 2)
		tab[4]++;
	if (tab[4] == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}

int		main(void)
{
	char	*string;
	char	reading[2];
	int		tab[6];

	tab[5] = 0;
	while (tab[5] <= 4)
		tab[tab[5]++] = 0;
	string = recup_str(0, reading);
	while (string[tab[0]] != '\n' && string[tab[0]] != '\0')
	{
		tab[0]++;
		tab[1]++;
	}
	tab[0] = 0;
	while (string[tab[0]])
		if (string[tab[0]++] == '\n')
			tab[2]++;
	fonction(tab, string);
	return (0);
}
