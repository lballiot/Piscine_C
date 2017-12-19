/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:07:23 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/14 14:33:59 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int pair;

	i = 0;
	pair = 0;
	while (length >= 0)
	{
		j = 0;
		while (tab[j] && pair == 0)
		{
			if (i == j)
				j++;
			if (tab[j] == tab[i])
				pair = 1;
			j++;
		}
		if (pair == 0)
			return (tab[i]);
		else
			pair = 0;
		i++;
		length--;
	}
	return (0);
}
