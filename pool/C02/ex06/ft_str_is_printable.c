/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 09:44:54 by ylabser           #+#    #+#             */
/*   Updated: 2024/08/02 21:57:55 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 32 && str[i] <= 126)
				i++;
			else
				return (0);
		}
		return (1);
	}
	else
		return (1);
}
