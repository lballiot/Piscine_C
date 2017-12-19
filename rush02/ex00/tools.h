/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmisdrah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 22:09:15 by mmisdrah          #+#    #+#             */
/*   Updated: 2017/07/23 22:10:59 by lballiot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H
# include <unistd.h>
# include <stdlib.h>

int		ft_strcmp(char *s1, char *s2);

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nb);

char	*ft_strcat(char *dest, char *src);

int		ft_strlen(char *str);

char	*ft_strcpy(char *dest, char *src);

char	*colle00(int x, int y, char *str);

char	*colle01(int x, int y, char *str);

char	*colle02(int x, int y, char *str);

char	*colle03(int x, int y, char *str);

char	*colle04(int x, int y, char *str);

int		affichage(int i, int tmp, int tmp2, int j);

char	*recup_str(int i, char reading[2]);

int		colle_00(int *tab, char *string);

int		colle_01(int *tab, char *string);

int		colle_02(int *tab, char *string);

int		colle_03(int *tab, char *string);

int		colle_04(int *tab, char *string);
#endif
