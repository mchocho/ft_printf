/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleflags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:01:18 by mchocho           #+#    #+#             */
/*   Updated: 2019/09/12 15:10:14 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_handleflags(char c, void val)
{
	if (!ft_strchr("sSpdDioOuUxXcC", c))
		return ;
	else if (c == 's')
		ft_putstr((char *)val);
	else if (c == 'c')
		ft_putchar((char));
}
