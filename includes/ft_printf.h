/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 19:00:12 by mmicheli          #+#    #+#             */
/*   Updated: 2021/12/22 17:33:46 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_putchar(char c);
int			ft_putstr(char *str);
size_t		ft_strlen(const char *s);
long int	ft_putnbr(long int i);
char		*ft_strdup(const char *s1);

int			ft_spec_c(va_list args, char ch);
int			ft_spec_s(va_list args, char *str);
int			ft_spec_i_d(va_list args, int i);
int			ft_spec_u(va_list args, unsigned int i);
int			ft_spec_xs(va_list args, unsigned int i);
int			ft_spec_xl(va_list args, unsigned int i);
int			ft_spec_p(va_list args, unsigned long int i);

int			ft_convert_hex_dwn(unsigned long int decnum);
long int	ft_convert_hex_upp(unsigned long int decnum);
int			ft_specificator( const char *strin, va_list args);
long int	ft_convert_uint(int i);
int			ft_strparse(const char *strin, va_list args);
int			ft_printf(const char *frm, ...);

#endif
