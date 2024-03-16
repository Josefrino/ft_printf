/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josvieir <josvieir@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:01:45 by josvieir          #+#    #+#             */
/*   Updated: 2024/03/16 16:27:03 by josvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar_len(char character, int *length);
void	ft_putstr_null(char *args, int *length);

void	ft_putnbr(int number, int *length);
void	ft_puthexa(unsigned int x, int *length, char x_or_x);
void	ft_putunbr(unsigned int u, int *length);
void	ft_putptr(size_t pointer, int *length);

int		ft_printf(const char *string, ...);

#endif