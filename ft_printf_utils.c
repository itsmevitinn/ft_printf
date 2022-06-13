/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:16:07 by vsergio           #+#    #+#             */
/*   Updated: 2022/06/13 12:19:53 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	size_and_print_int(va_list list_arg)
{
	char	*converted;
	int		sizeconverted;

	converted = ft_itoa(va_arg(list_arg, int));
	sizeconverted = ft_putstr_int(converted);
	free (converted);
	return (sizeconverted);
}

int	size_and_print_unsigned(va_list list_arg)
{
	char	*converted;
	int		sizeconverted;

	converted = ft_unsigneditoa(va_arg(list_arg, unsigned int));
	sizeconverted = ft_putstr_int(converted);
	free (converted);
	return (sizeconverted);
}

int	size_and_print_hex(va_list list_arg, char *basehex, char check)
{
	char	*converted;
	int		sizeconverted;
	if (check == 'x' || check == 'X')
		converted = ft_unsignedtohex(va_arg(list_arg, unsigned int), basehex);
	else
		converted = ft_unsignedtohex(va_arg(list_arg, unsigned long), basehex);
	sizeconverted = ft_putstr_int(converted);
	free (converted);
	return (sizeconverted);
}