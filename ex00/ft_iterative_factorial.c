/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csassman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 09:21:25 by csassman          #+#    #+#             */
/*   Updated: 2020/07/13 13:25:35 by csassman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_irative_factorial(int nb) {
	int fact;
	fact = 1;

	if (nb<0) {
		return(0);
	}
	else if (nb>12) {
	   return(0);
	}
	while (nb >= 1 ) {
		fact= fact*nb;
		nb -=1;
	}
	return(fact);
}















			
