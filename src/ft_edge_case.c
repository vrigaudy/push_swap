/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_edge_case.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:19:49 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/04/05 17:17:47 by vrigaudy         ###   ########.fr       */
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

static void	ft_reverse_small_sort(int *stack_b, t_store *bank)
{
	if (bank->lim_b == 2)
	{
		if (stack_b[0] < stack_b[1])
			ft_sb(stack_b, bank);
	}
	else if (bank->lim_b == 3)
	{
		if (stack_b[2] > stack_b[1] && stack_b[1] > stack_b[0])
		{
			ft_rb(stack_b, bank);
			ft_sb(stack_b, bank);
		}
		if (stack_b[1] > stack_b[2] && stack_b[2] > stack_b[0])
			ft_rb(stack_b, bank);
		if (stack_b[2] > stack_b[0] && stack_b[0] > stack_b[1])
			ft_rrb(stack_b, bank);
		if (stack_b[1] > stack_b[0] && stack_b[0] > stack_b[2])
			ft_sb(stack_b, bank);
		if (stack_b[0] > stack_b[2] && stack_b[2] > stack_b[1])
		{
			ft_rrb(stack_b, bank);
			ft_sb(stack_b, bank);
		}
	}
}

void	ft_size_is_4_to_6(int *stack_a, int *stack_b, t_store *bank)
{
	int	i;
	int	med;

	i = 0;
	med = 0;
	while (i < bank->size)
	{
		med = med + stack_a[i];
		i++;
	}
	med = med / bank->size;
	i = 0;
	while (i < bank->size)
	{
		if (stack_a[0] <= med)
			ft_pb(stack_b, stack_a, bank);
		else
			ft_ra(stack_a, bank);
		i++;
	}
	ft_size_is_1_to_3(stack_a, bank);
	ft_reverse_small_sort(stack_b, bank);
	while (bank->lim_b > 0)
		ft_pa(stack_a, stack_b, bank);
}
