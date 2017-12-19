/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 14:21:14 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/11 22:54:08 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_nb(char mil, char hundred, char decade, char unit)
{
	if (!(mil == '9' && hundred == '8' && decade == '9' && unit == '9'))
	{
		ft_putchar(mil);
		ft_putchar(hundred);
		ft_putchar(' ');
		ft_putchar(decade);
		ft_putchar(unit);
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar(mil);
		ft_putchar(hundred);
		ft_putchar(' ');
		ft_putchar(decade);
		ft_putchar(unit);
	}
}

void	ft_print_comb2_suite(char mil, char hundred, char decade, char unit)
{
	while (hundred <= '9')
	{
		while (decade <= '9')
		{
			while (unit <= '9')
				ft_print_nb(mil, hundred, decade, unit++);
			decade++;
			unit = '0';
		}
		hundred++;
		unit = hundred + 1;
		decade = mil;
	}
}

void	ft_print_comb2(void)
{
	char mil;
	char hundred;
	char decade;
	char unit;

	mil = '0';
	hundred = '0';
	decade = '0';
	unit = '1';
	while (mil <= '9')
	{
		ft_print_comb2_suite(mil, hundred, decade, unit);
		mil++;
		unit = hundred + 1;
		decade = mil;
		hundred = '0';
	}
}
