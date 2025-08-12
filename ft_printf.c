/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 11:46:49 by muayna            #+#    #+#             */
/*   Updated: 2025/08/12 16:54:00 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int format(va_list args, char c)
{
	if (c == '%')
		return (write(1, &"%", 1));
	else if (c == 'c')
		return (write(1, &c, 1));
	return 0;
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		print_size;

	va_start(args, str);
	print_size = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			print_size = print_size + format(args, str[i]);
		}
		else
			print_size = print_size + write(1, &str[i], 1);
		i++;
	}
	return print_size;
}

int main ()
{
	char c = 'd';
	ft_printf("Merhaba Benim %c %c %c %%Adım ", c, c, c);
}
