/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isometric.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:10:17 by lsun              #+#    #+#             */
/*   Updated: 2023/07/04 17:31:52 by lsun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

t_pos	isometric(t_pos pos)
{
	int	temp;

	temp = pos.x;
	pos.x = (pos.x - pos.y) * 0.87;
	pos.y = -pos.z + (temp + pos.y) * 0.50;
	return (pos);
}