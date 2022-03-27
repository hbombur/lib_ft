/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:36:56 by hbombur           #+#    #+#             */
/*   Updated: 2021/10/16 14:11:53 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int	c)
{
	int		i;
	char	b;
	char	*str;

	i = 0;
	b = (unsigned char)c;
	str = (char *) s;
	while (*str != '\0')
	{
		if (*str == b)
			return (str);
		str++;
	}
	if (*str == b)
		return (str);
	return (0);
}
