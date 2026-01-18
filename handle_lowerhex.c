/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_lowerhex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russ1337 <russ1337@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:48:58 by rfoo              #+#    #+#             */
/*   Updated: 2026/01/19 06:03:21 by russ1337         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_lowerhex(va_list *args)
{
	unsigned long	n;

	n = va_arg(*args, unsigned long);
	return (print_hex(n, 0));
}
