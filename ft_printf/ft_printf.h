/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:17:25 by vrigaudy          #+#    #+#             */
/*   Updated: 2021/12/15 16:29:32 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_strlen_pf(const char *str);
int		ft_printf(const char *str, ...);

void	ft_putnbr_pf(int i, int *count);
void	ft_putchar_pf(char c, int *count);
void	ft_putstr_pf(char *str, int *count);
void	ft_putnbru_pf(unsigned int i, int *count);
void	ft_dispatch(va_list arg, char c, int *count);
void	ft_putnbr_base_pf(unsigned long int i, char *base, int *count);

#endif
