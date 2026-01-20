/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_lowerhex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:48:58 by rfoo              #+#    #+#             */
/*   Updated: 2026/01/20 12:14:18 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_lowerhex(va_list *args)
{
	unsigned long	n;

	n = va_arg(*args, unsigned long);
	return (print_hex(n, 0));
}
