/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 15:12:16 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/26 10:40:14 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_compteur(char *s, int i)
{
	int compteur;

	if ((s[i] != '\n' && s[i]) || (s[i] != '\t' && s[i]) ||
			(s[i] != ' ' && s[i]))
		compteur = 1;
	if ((s[i] == '\n' && s[i]) || (s[i] == '\t' && s[i]) ||
			(s[i] == ' ' && s[i]) || !s[i])
		compteur = 0;
	while (s[i])
	{
		if (s[i] == '\n' || s[i] == '\t' || s[i] == ' ' || i == 0)
		{
			while ((s[i] == '\n' && s[i]) || (s[i] == '\t' && s[i])
					|| (s[i] == ' ' && s[i]))
				i++;
			if ((s[i] != '\n' && s[i] != '\t' && s[i] != ' '
						&& s[i] != '\0'))
				compteur++;
			while ((s[i] != '\n' && s[i] != '\t' && s[i] != ' ' && s[i]))
				i++;
			i--;
		}
		i++;
	}
	return (compteur);
}

char	**ft_remplissage(char *s, int i, char **tab, int index_tab)
{
	int size;
	int j;

	while (s[++i])
		if (s[i] == '\n' || s[i] == '\t' || s[i] == ' ' || i == 0)
		{
			size = 0;
			while ((s[i] == '\n' && s[i]) || (s[i] == '\t' && s[i])
					|| (s[i] == ' ' && s[i]))
				i++;
			j = i;
			while ((s[i] != '\n' && s[i] != '\t' && s[i] != ' ' && s[i++]))
				size++;
			if (!(tab[index_tab] = malloc(sizeof(char) * size + 1)))
				return (NULL);
			i = j;
			j = 0;
			while ((s[i] != '\n' && s[i] != '\t' && s[i] != ' ' && s[i]))
				tab[index_tab][j++] = s[i++];
			if ((s[--i] != '\n' && s[i] != '\t' && s[i] != ' ' && s[i] != '\0'))
				tab[index_tab++][j] = '\0';
		}
	tab[index_tab] = NULL;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	char	**tab;
	int		compteur;

	i = 0;
	compteur = ft_compteur(str, i);
	if (!(tab = malloc(sizeof(char*) * (compteur + 1))))
		return (0);
	i = 0;
	tab = ft_remplissage(str, -1, tab, 0);
	return (tab);
}
