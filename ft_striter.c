/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyster <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 23:47:50 by soyster           #+#    #+#             */
/*   Updated: 2019/04/30 21:01:18 by soyster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	i;

	if (s == 0 || f == 0)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(&s[i]);
		i++;
	}
}
