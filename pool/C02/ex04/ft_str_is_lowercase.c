/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:53:36 by ylabser           #+#    #+#             */
/*   Updated: 2024/07/30 09:42:40 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				i++;
			else
				return (0);
		}
		return (1);
	}
	else
		return (1);
}
