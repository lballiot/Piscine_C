/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 21:20:01 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/12 17:47:19 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char centaine, char dizaine, char unite)
{
	ft_putchar(centaine);
	ft_putchar(dizaine);
	ft_putchar(unite);
}

char	if_789(char centaine, char dizaine, char unite)
{
	if (!(centaine == '7' && dizaine == '8' && unite == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (++unite);
}

void	ft_print_comb(void)
{
	char centaine;
	char dizaine;
	char unite;

	centaine = '0';
	dizaine = '1';
	unite = '2';
	while (centaine <= '8')
	{
		while (unite <= '9')
		{
			ft_print(centaine, dizaine, unite);
			unite = if_789(centaine, dizaine, unite);
		}
		if (unite > '9')
			dizaine++;
		unite = dizaine + 1;
		if (dizaine > '9')
		{
			centaine++;
			dizaine = centaine + 1;
			unite = dizaine + 1;
		}
	}
}
