/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fd>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 03:22:29 by vgallois          #+#    #+#             */
/*   Updated: 2016/12/02 18:59:41 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *as)
{
	while (*as)
	{
		*as = 0;
		as++;
	}
}
