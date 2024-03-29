/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josvieir <josvieir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:02:13 by josvieir          #+#    #+#             */
/*   Updated: 2024/03/22 19:14:55 by josvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_format(char s, va_list *args, int *len, int *i)
{
	if (s == 's')
		ft_putstr_null(va_arg(*args, char *), len);
	else if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(*args, int), len);
	else if (s == 'u')
		ft_putunbr(va_arg(*args, unsigned int), len);
	else if (s == 'x')
		ft_puthexa(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		ft_puthexa(va_arg(*args, unsigned int), len, 'X');
	else if (s == 'p')
		ft_putptr(va_arg(*args, size_t), len);
	else if (s == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (s == '%')
		ft_putchar_len('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_format(str[i], &args, &len, &i);
			i++;
		}
		else
		{
			ft_putchar_len((char)str[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}
