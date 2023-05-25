/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elrichar <elrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:50:19 by elrichar          #+#    #+#             */
/*   Updated: 2023/05/16 14:10:44 by elrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		total_len;

	if (!s || *s == '\0')
		return (0);
	total_len = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			total_len += ft_print_element((s + 1), args);
			s++;
		}
		else
			total_len += ft_putchar(*s);
		s++;
	}
	va_end(args);
	return (total_len);
}
