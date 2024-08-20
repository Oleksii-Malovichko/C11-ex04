/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:23:54 by alex              #+#    #+#             */
/*   Updated: 2024/08/20 21:16:27 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdio.h>
# include <unistd.h>

int		ft_atoi(char *str);
int		check_last_arg(char *str);
char	check_sign(char *sign);
int		stop_zero(char sign, char arg);
int		math(int arg1, int arg2, char sign);
int		main(int n, char *argv[]);
void	int_to_char(int n);

#endif