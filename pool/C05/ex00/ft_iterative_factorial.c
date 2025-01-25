/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 17:55:02 by ylabser           #+#    #+#             */
/*   Updated: 2024/08/07 18:16:53 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		i = 1;
		while (i < nb)
		{
			result *= i + 1;
			i++;
		}
		return (result);
	}
}
