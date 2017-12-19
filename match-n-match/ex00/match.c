/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 10:49:51 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/16 22:54:38 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_star(char *s1, char *s2, int i, int j);

int		ft_suite(char *s1, char *s2, int i, int j)
{
	if (s2[j] == '*')
		return (ft_star(s1, s2, i, j));
	else
		return (0);
	return (0);
}

int		ft_star(char *s1, char *s2, int i, int j)
{
	int tmp;

	while (s2[j] == '*' && s2[j] != '\0')
		j++;
	tmp = j;
	while (s1[i] != s2[j] && s1[i] != '\0')
		i++;
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else
			return (ft_suite(s1, s2, i, j));
	}
	if ((s1[i] == '\0' && s2[j] == '\0') || s2[j] == '\0')
		return (1);
	if (s1[i] == '\0' && s2[j] == '*')
		return (ft_star(s1, s2, i, j));
	if (s1[i] != '\0' && s2[j] == '\0')
		return (ft_star(s1, s2, i, tmp));
	return (0);
}

int		match(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else if (s2[i] == '*')
			return (ft_star(s1, s2, i, i));
		else
			return (0);
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	if (s1[i] == '\0' && s2[i] == '*')
		return (ft_star(s1, s2, i, i));
	return (0);
}
