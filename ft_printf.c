/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 17:41:31 by mchocho           #+#    #+#             */
/*   Updated: 2019/09/12 17:36:12 by mchocho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"


/*char *ft_handleflags(char *flag, char *val)
{
	if (ft_strcmp(flag, "hh"))
		return (ft_atoi(val));
	else
		return ((char *)val);
}*/

int		ft_isvalidformat(char c)
{
	return (ft_strichr("sSpdDioOuUxXcC", c));
}

void	ft_handleplaceholders(char ph, void *val)
{
	if (ph == '%')
		ft_putchar('%');
	else if (ph == 'c')
		ft_putchar((char)val);
	else if (ph == 's' || ph == 'S')
		ft_putstr((char *)val);
	else if (ph == 'p')
	{}	//FUCK
	else if (ph == 'd' || ph == 'D')
		ft_putnbr(*(int *)(&val));
}

int main()
{
	ft_handleplaceholders('d', (void *)810456);
	return 0;
}
