/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radtodeg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/19 11:07:20 by pabril            #+#    #+#             */
/*   Updated: 2016/04/19 11:07:23 by pabril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_radtodeg(double x)
{
	double pi;

	pi = 3.141592653589793;
	return ((x * 180) / pi);
}
