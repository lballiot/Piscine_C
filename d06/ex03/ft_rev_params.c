/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 18:44:28 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/20 19:01:59 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rev_params(char **argv, int argc)
{
	int j;

	j = 0;
	while (argc > 1)
	{
		while (argv[argc - 1][j] != '\0')
		{
			ft_putchar(argv[argc - 1][j]);
			j++;
		}
		ft_putchar('\n');
		argv[argc - 1][j] = '\0';
		argc--;
		j = 0;
	}
}

int		main(int argc, char **argv)
{
	ft_rev_params(argv, argc);
	return (0);
}
