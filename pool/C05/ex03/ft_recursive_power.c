/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:42:18 by ylabser           #+#    #+#             */
/*   Updated: 2024/08/07 16:28:21 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 0;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * (ft_recursive_power(nb, power - 1)));
}
