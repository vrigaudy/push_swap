/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_edge_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:19:49 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/04/04 12:11:14 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_size_is_1_to_3(int *stack_a, t_store *bank)
{
	if (bank->lim_a == 2)
	{
		if (stack_a[0] > stack_a[1])
			ft_sa(stack_a, bank);
	}
	else if (bank->lim_a == 3)
	{
		if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2])
		{
			ft_sa(stack_a, bank);
			ft_rra(stack_a, bank);
		}
		if (stack_a[0] > stack_a[2] && stack_a[2] > stack_a[1])
			ft_ra(stack_a, bank);
		if (stack_a[1] > stack_a[0] && stack_a[0] > stack_a[2])
			ft_rra(stack_a, bank);
		if (stack_a[2] > stack_a[0] && stack_a[0] > stack_a[1])
			ft_sa(stack_a, bank);
		if (stack_a[1] > stack_a[2] && stack_a[2] > stack_a[0])
		{
			ft_rra(stack_a, bank);
			ft_sa(stack_a, bank);
		}
	}
}
