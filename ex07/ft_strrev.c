/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:45:04 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/15 16:05:39 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


char	ft_strrev(char *str)
{
	int size = 0;
		int i = 0;
	char *rev;
	

	while(str[size] != '\0')
	{
		size++;
	}
		while(size > 0)
				{
					rev[i] = str[size];
					i++;
					size--;

				}
				
				str = rev;
				return (*str);
}

int 	main()
{
	char *str = "Dumisani Sithole!";
	
	char x = 0;
	

	x = ft_strrev(str);
	printf("reverse is %d\n", x);

	return (0);
}

