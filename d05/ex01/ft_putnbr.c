/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 15:52:11 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/20 16:49:41 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
