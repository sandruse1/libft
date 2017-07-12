/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandruse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 15:10:27 by sandruse          #+#    #+#             */
/*   Updated: 2016/12/07 16:47:43 by sandruse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *s)
{
	int		i;
	int		j;
	char	d;

	i = 0;
	j = 0;
	while (s[j + 1])
		j++;
	while (i < j)
	{
		d = s[i];
		s[i++] = s[j];
		s[j--] = d;
	}
}
