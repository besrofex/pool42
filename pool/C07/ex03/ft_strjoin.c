/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:02:19 by ylabser           #+#    #+#             */
/*   Updated: 2024/08/12 11:55:54 by ylabser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlencat(int size, char **s1, char *s2)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(s1[i]);
		i++;
	}
	len += (size - 1) * ft_strlen(s2) + 1;
	return (len);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = 0;
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	if (size == 0)
	{
		tab = malloc(sizeof(char));
		*tab = 0;
		return (tab);
	}
	tab = (char *) malloc(sizeof (char) * (ft_strlencat(size, strs, sep)));
	if (tab == NULL)
		return (NULL);
	*tab = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < (size - 1))
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}
