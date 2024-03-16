/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josvieir <josvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:01:02 by josvieir          #+#    #+#             */
/*   Updated: 2024/03/16 19:28:58 by josvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *len)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (num < 0)
	{
		ft_putchar_len('-', len);
		ft_putnbr(num * -1, len);
	}
	else
	{
		if (num > 9)
			ft_putnbr(num / 10, len);
		ft_putchar_len(num % 10 + '0', len);
	}
}

void	ft_putptr(size_t ptr, int *len)
{
	char	str[25];
	int		i;
	char	*base_chars;

	base_chars = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	(*len) += 2;
	if (ptr == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (ptr != 0)
	{
		str[i] = base_chars[ptr % 16];
		ptr = ptr / 16;
		i++;
	}
	while (i--)
	{
		ft_putchar_len(str[i], len);
	}
}

void	ft_puthexa(unsigned int x, int *len, char lower_or_upper)
{
	char	str[25];
	char	*base_chars;
	int		i;

	if (lower_or_upper == 'X')
		base_chars = "0123456789ABCDEF";
	else
		base_chars = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (x != 0)
	{
		str[i] = base_chars [x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putchar_len(str[i], len);
}

void	ft_putunbr(unsigned int u, int *len)
{
	if (u >= 10)
		ft_putunbr(u / 10, len);
	ft_putchar_len(u % 10 + '0', len);
}
