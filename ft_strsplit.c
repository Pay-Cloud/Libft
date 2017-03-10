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

static	char	*ft_strl(char const *s, char c)
{
	int i;
	char *str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(str = ft_strnew(i) + 1))
		return (NULL);
		ft_putchar('\n');
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{

	int j;
	int i;
	char **str;
	

	str = NULL;
	j = 0;
	i = -1;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			str[j] = ft_strl(s, c);
		while (*s && *s != c)
		{

			str[j][++i] = *s;
			s++;
		}
		j++;
	}
	if (str)
	{
		str[i] = "\0";
		return (str);
	}
	return (NULL);
}

int main(int ac, char **av)
{
	int i;
	char **s;

	i = -1;
	s = malloc(40);
	s =	ft_strsplit(av[1], av[2][0]);
		return 0;
	ft_putchar(s[0][0]);


	while (s[++i])
		ft_putstr(s[i]);

}
