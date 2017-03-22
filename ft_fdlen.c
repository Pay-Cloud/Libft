/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fdlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:29:47 by mmeziyan          #+#    #+#             */
/*   Updated: 2017/03/22 18:30:08 by mmeziyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_fdlen(char *av)
{
	int i;
	char buffer[1];
	int fd;

	i = 0;
	fd = open(av, O_RDONLY);
	while(read(fd, buffer, 1))
		i++;
	return (i);
}