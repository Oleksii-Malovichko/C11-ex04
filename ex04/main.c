/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:30:21 by alex              #+#    #+#             */
/*   Updated: 2024/08/20 20:54:58 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	check_sign(char *sign)
{
	if (sign[1] != '\0')
		return ('0');
	if (sign[0] != '+' && sign[0] != '-' && sign[0] != '/'
		&& sign[0] != '*' && sign[0] != '%')
		return ('0');
	return (sign[0]);
}

int	stop_zero(char sign, char arg)
{
	if ((sign == '/' || sign == '%') && arg == 0)
	{
		if (sign == '/')
			write(2, "Stop : division by zero\n", 24);
		else
			write(2, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int	math(int arg1, int arg2, char sign)
{
	if (sign == '-')
		return (arg1 - arg2);
	if (sign == '+')
		return (arg1 + arg2);
	if (sign == '/')
		return (arg1 / arg2);
	if (sign == '*')
		return (arg1 * arg2);
	return (arg1 % arg2);
}

int	main(int n, char *argv[])
{
	int		arg1;
	int		arg2;
	char	sign;
	int		result;

	sign = check_sign(argv[2]);
	if (n != 4)
	{
		return (1);
	}
	if (sign == '0')
	{
		write(2, "0\n", 2);
		return (1);
	}
	arg1 = ft_atoi(argv[1]);
	arg2 = ft_atoi(argv[3]);
	if (!(stop_zero(sign, arg2)))
		return (1);
	result = math(arg1, arg2, sign);
	int_to_char(result);
	write(1, "\n", 1);
}
