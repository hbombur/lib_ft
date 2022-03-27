/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbombur <hbombur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:36:39 by hbombur           #+#    #+#             */
/*   Updated: 2021/10/10 15:15:55 by hbombur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int	c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}