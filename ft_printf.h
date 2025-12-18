/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfoo <rfoo@student.42singapore.sg>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 19:52:43 by rfoo              #+#    #+#             */
/*   Updated: 2025/12/18 19:39:30 by rfoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
typedef struct entry
{
	char	key;
	void	*value;
}			t_entry;

typedef struct dict
{
	int		size;
	t_entry	*entries;
}			t_dict;

int		ft_printf(const char *format, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

void	handle_char(char c);
void	handle_str(char *s);
void	handle_int(int n);
void	handle_ptr(void *ptr);
// void	handle_uint(unsigned int n);

#endif