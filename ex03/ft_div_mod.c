/* *************************************************/goinfre/dusithol/Desktop/d03/ex03/ft_div_mod.c************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:54:24 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/14 12:02:28 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void 	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

