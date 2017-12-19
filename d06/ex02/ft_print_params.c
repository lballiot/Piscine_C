/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 17:42:21 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/20 18:36:07 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_program_name(char **arg, int argc)
{
	int i;
	int j;

	j = 0;
	i = 1;
	while (argc > 1)
	{
		while (arg[i][j] != '\0')
		{
			ft_putchar(arg[i][j]);
			j++;
		}
		ft_putchar('\n');
		arg[i][j] = '\0';
		j = 0;
		i++;
		argc--;
	}
}

int		main(int argc, char **argv)
{
	ft_print_program_name(argv, argc);
	return (0);
}
