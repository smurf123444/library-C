/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 22:02:20 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/10 22:03:20 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isblank(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}