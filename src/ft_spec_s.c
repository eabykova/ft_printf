/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:33:24 by mmicheli          #+#    #+#             */
/*   Updated: 2021/12/22 17:33:51 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		write(1, &*str++, 1);
		count++;
	}
	return (count);
}

int	ft_spec_s(va_list args, char *str)
{
	int	count;

	count = 0;
	str = va_arg(args, char *);
	if (!str)
	{
		count += ft_putstr("(null)");
		return (count);
	}
	count += ft_putstr(str);
	return (count);
}
