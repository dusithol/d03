/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:45:04 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/15 16:45:15 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char*	ft_strrev(char *str)
{
	int size = 0;
		int i = 0;
	char *rev = (char *)malloc(sizeof(char) * 13);
	

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
				
		//		str = rev;
				return (rev);
}

int 	main()
{
	char *str = "Dumisani Sithole!";
	
//	char *x; //= 0;
	

	char *x = ft_strrev(str);
	printf("reverse is %s\n", x);

	return (0);
}

