/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:57:29 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/04/04 12:11:06 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_algo(int *stack_a, int *stack_b, t_store *bank)
{
	(void)stack_b;
	if (bank->size <= 3 && bank->size >= 1)	
		ft_size_is_1_to_3(stack_a, bank);
}
