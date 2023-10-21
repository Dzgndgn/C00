/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:16:57 by ddogan            #+#    #+#             */
/*   Updated: 2023/08/31 14:16:59 by ddogan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	alpha;

	alpha = 'a';
	if (n < 0)
	{
		alpha = 'N';
		write(1, &alpha, 1);
	}
	else
	{
		alpha = 'P';
		write(1, &alpha, 1);
	}
}
