/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 12:05:12 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/16 13:41:13 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_ultimate_div_mod(int *a, int *b)
{
	int t;
   		t= *a;
		*a = *a / *b;
		*b = t % *b;
}


