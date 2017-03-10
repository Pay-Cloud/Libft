/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 23:59:23 by mmeziyan          #+#    #+#             */
/*   Updated: 2017/03/03 23:59:25 by mmeziyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		index;
	char	*str;

	if (!s)
		return (NULL);
	index = -1;
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		if (s[i])
			i++;
	if (!s[i])
		return ("");
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (!(str = ft_strnew(j - i + 1)))
		return (NULL);
	while (s[i] && i <= j)
		str[++index] = s[i++];
	return (str);
}
