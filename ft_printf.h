/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josvieir <josvieir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:01:45 by josvieir          #+#    #+#             */
/*   Updated: 2024/03/20 23:14:59 by josvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar_len(char c, int *len);
void	ft_putstr_null(char *args, int *len);

void	ft_putnbr(int num, int *len);
void	ft_puthexa(unsigned int x, int *len, char lower_or_upper);
void	ft_putunbr(unsigned int u, int *len);
void	ft_putptr(size_t ptr, int *len);

int		ft_printf(const char *str, ...);

#endif