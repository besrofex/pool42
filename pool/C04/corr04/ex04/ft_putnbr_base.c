/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:13:33 by ylabser           #+#    #+#             */
/*   Updated: 2024/08/06 18:39:40 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_doublechar(char	*str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_printnbr(int n, int len, char *str)
{
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n >= len)
		ft_printnbr(n / len, len, str);
	ft_putchar(str[n % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	int		i;
	int		j;

	size = 0;
	size = ft_strlen(base);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return ;
		i++;
	}
	if (size < 2)
		return ;
	if (ft_doublechar(base))
		return ;
	j = 0;
	while (base[j])
	{
		if (base[j] < 32 || base[j] > 126)
			return ;
		j++;
	}
	ft_printnbr(nbr, size, base);
}
