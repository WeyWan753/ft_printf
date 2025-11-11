/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabin-wa <wabin-wa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:34:21 by pola              #+#    #+#             */
/*   Updated: 2025/11/11 14:22:35 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *str, ...);
size_t	ft_putnbr_printf(size_t n, char *base);
size_t	ft_putchar_printf(char c);
size_t	ft_putstr_printf(char *str);
size_t	ft_putpointer_printf(void *p);
size_t	ft_putint_printf(int n);
size_t	ft_putvar_printf(va_list *args, char c);
#endif
