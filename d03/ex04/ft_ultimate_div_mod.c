/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lballiot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 23:25:07 by lballiot          #+#    #+#             */
/*   Updated: 2017/07/11 23:54:37 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int result;
	int rest;

	if (*b != 0)
	{
		result = *a / *b;
		rest = *a % *b;
		*a = result;
		*b = rest;
	}
}
