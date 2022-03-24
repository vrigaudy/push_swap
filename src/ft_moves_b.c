/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:44:18 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/03/24 16:44:56 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sb(int *stack_b, t_store *bank)
{
	int	swap;

	if (bank->lim_b > 2)
	{
		swap = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = swap;
		ft_printf("sb\n");
	}
}

void	ft_pb(int *stack_b, int *stack_a, t_store *bank)
{
	int	i;
	int	j;

	i = bank->lim_b - 1;
	j = 0;
	if (bank->lim_a > 0)
	{
		while (i >= 0)
		{
			stack_b[i + 1] = stack_b[i];
			i--;
		}
		stack_b[0] = stack_a[0];
		while (j <= bank->lim_a - 2)
		{
			stack_a[j] = stack_a[j + 1];
			j++;
		}
		bank->lim_b = bank->lim_b + 1;
		bank->lim_a = bank->lim_a - 1;
		ft_printf("pb\n");
	}
}

void	ft_ra(int *stack_b, t_store *bank)
{
	int	i;
	int	swap;

	i = 0;
	swap = stack_b[0];
	if (bank->lim_b > 1)
	{
		while (i <= bank->lim_b - 2)
		{
			stack_b[i] = stack_b[i + 1];
			i++;
		}
		stack_b[bank->lim_b - 1] = swap;
		ft_printf("rb\n");
	}
}

void	ft_rra(int *stack_b, t_store *bank)
{
	int	i;
	int	swap;

	i = bank->lim_b - 2;
	swap = stack_b[i + 1];
	if (bank->lim_b > 1)
	{
		while (i >= 0)
		{
			stack_b[i + 1] = stack_b[i];
			i--;
		}
		stack_b[0] = swap;
		ft_printf("rrb\n");
	}
}
