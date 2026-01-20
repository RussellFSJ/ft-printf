/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_upperhex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:49:09 by rfoo              #+#    #+#             */
/*   Updated: 2026/01/20 12:14:26 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_upperhex(va_list *args)
{
	unsigned long	n;

	n = va_arg(*args, unsigned long);
	return (print_hex(n, 1));
}
