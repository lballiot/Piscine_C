/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 18:46:52 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/27 12:40:04 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	char	tmp[12];
	int		i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb *= -1;
	}
	while (nb > 9)
	{
		tmp[i++] = (nb % 10) + 48;
		nb = nb / 10;
	}
	if (nb < 10)
		tmp[i] = nb + 48;
	while (i >= 0)
		ft_putchar(tmp[i--]);
}

void	ft_show_tab(struct s_stock_par *par)
{
	int j;

	j = 0;
	if (par->copy)
	{
		ft_putstr(par->copy);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		while (par->tab[j])
		{
			ft_putstr(par->tab[j]);
			ft_putchar('\n');
			j++;
		}
	}
}
