/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:15:33 by ylabser           #+#    #+#             */
/*   Updated: 2024/08/11 21:47:35 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int	i;
	int	len;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	p = (int *) malloc (sizeof (int) * len);
	if (!p)
		return (-1);
	else
	{
		*range = p;
		i = 0;
		while (max > min)
		{
			p[i] = min;
			min++;
			i++;
		}
		return (len);
	}
}
