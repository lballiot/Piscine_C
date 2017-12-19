/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:46:14 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/13 19:57:02 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_min(int hour, int hourafter)
{
	if (hour == 0)
		hour = 12;
	if (hourafter == 13)
		hourafter = 1;
}

void	ft_takes_place(int hour)
{
	int		hourafter;
	char	*hourstr;
	char	*hourafterstr;

	hourstr = "P.M.";
	hourafterstr = "A.M.";
	hourafter = hour + 1;
	if (hour >= 12 && hour < 24)
		hourstr = "P.M.";
	else
		hourstr = "A.M.";
	if (hourafter >= 12 && hourafter < 24)
		hourafterstr = "P.M.";
	else
		hourafterstr = "A.M.";
	if (hour > 12 && hour <= 24)
	{
		hour = hour - 12;
		hourafter = hourafter - 12;
	}
	ft_min(hour, hourafter);
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %s AND %d.00 %s",
				hour, hourstr, hourafter, hourafterstr);
}
