/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:15:17 by ylabser           #+#    #+#             */
/*   Updated: 2024/08/12 12:09:32 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;
	int	len;

	len = 0;
	if (max <= min)
		return (NULL);
	p = (int *)malloc(sizeof (int) * (max - min));
	if (p == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
