/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 14:43:31 by mmeziyan          #+#    #+#             */
/*   Updated: 2017/03/10 14:43:34 by mmeziyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		n;

	i = -1;
	n = 0;
	j = -1;
	while (s)
	{
		while (s[j] && s[++j] != c)
			str[n][++i] = s[j];
		while (s[j] && s[j] == c)
			j++;
	}
	return (NULL);
}
