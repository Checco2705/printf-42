/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fun.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffebbrar <ffebbrar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:36:18 by ffebbrar          #+#    #+#             */
/*   Updated: 2024/01/27 19:00:11 by ffebbrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_lennum(long int i)
{
	int	j;

	j = 0;
	if (i == 0)
		return (1);
	if (i < 0)
	{
		i *= -1;
		j++;
	}
	while (i > 0)
	{
		i /= 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nb;
	int			l;
	int			j;

	nb = (long int) n;
	j = -1;
	l = ft_lennum(nb);
	str = (char *)malloc((sizeof(char) * (l + 1)));
	if (!str)
		return (NULL);
	str[l--] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
		j = 0;
	}
	while (l > j)
	{
		str[l] = 48 + (nb % 10);
		nb = nb / 10;
		l--;
	}
	return (str);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnumb(int n)
{
	int		len;
	char	*str;

	str = ft_itoa(n);
	len = ft_putstr(str);
	free(str);
	return (len);
}