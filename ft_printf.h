/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muayna <muayna@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:42:00 by muayna            #+#    #+#             */
/*   Updated: 2025/08/13 14:14:39 by muayna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

#include <unistd.h>
#include <stdio.h> //SİL BUNU
#include <stdarg.h>


int	ft_printf(const char *str, ...);
int ft_putstr(char *str);
int ft_write_pointer(void *p);
int ft_putnbr(int n);

#endif