/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:36:50 by hbombur           #+#    #+#             */
/*   Updated: 2021/10/27 12:59:22 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*copy;
	size_t	i;

	i = ft_strlen(s1) + 1;
	copy = (char *) malloc(i * sizeof(char));
	if (copy)
		ft_memcpy(copy, s1, i);
	return (copy);
}
