/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 17:15:45 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/24 09:20:02 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_program_name(char *arg)
{
	while (*arg != '\0')
	{
		ft_putchar(*arg);
		arg++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	argc = 0;
	ft_print_program_name(argv[0]);
	return (0);
}
