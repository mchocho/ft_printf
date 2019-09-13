/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleformat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:54:13 by mchocho           #+#    #+#             */
/*   Updated: 2019/09/13 16:54:28 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_handleformat(char ph, void *val)
{
        if (ph == '%')
                ft_putchar('%');
        else if (ph == 'c')
                ft_putchar((char)val);
        else if (ph == 's' || ph == 'S')
                ft_putstr((char *)val);
        else if (ph == 'p')
        {}      //FUCK
        else if (ph == 'd' || ph == 'D')
                ft_putnbr(*(int *)(&val));
}}
