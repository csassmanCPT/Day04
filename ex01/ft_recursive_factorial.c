/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csassman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 17:01:08 by csassman          #+#    #+#             */
/*   Updated: 2020/07/13 17:06:40 by csassman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial (int nb){
	if (nb == 0) {
		return(1);
	}
	if (nb < 0){
		return(0);
	}
	return (nb * ft_recursive_factorial(nb-1));
}

