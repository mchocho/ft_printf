/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchocho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 17:41:31 by mchocho           #+#    #+#             */
/*   Updated: 2019/09/13 18:04:51 by mchocho          ###   ########.fr       */
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

void	ft_printf(char *str, ...)
{
	va_list args;
	int i;

	i = 0;

}

int main()
{
	ft_handleplaceholders('d', (void *)810456);
	return 0;
}
