/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:15:30 by aichida           #+#    #+#             */
/*   Updated: 2024/05/02 10:21:32 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	x;

	x = n;
	if (x < 0)
	{
		x *= -1;
		ft_putchar_fd('-', fd);
	}
	if (x >= 10)
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putchar_fd((x % 10) + '0', fd);
	}
	else
		ft_putchar_fd(x + '0', fd);
}
