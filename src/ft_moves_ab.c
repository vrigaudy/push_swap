/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_ab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:44:42 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/04/09 17:58:50 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ss(int *stack_a, int *stack_b, t_store *bank)
{
	int	swap_a;
	int	swap_b;

	if (bank->lim_a > 1 && bank->lim_b > 1)
	{
		swap_a = stack_a[0];
		swap_b = stack_b[0];
		stack_a[0] = stack_a[1];
		stack_b[0] = stack_b[1];
		stack_a[1] = swap_a;
		stack_b[1] = swap_b;
		ft_printf("ss\n");
	}
}

void	ft_rr(int *stack_a, int *stack_b, t_store *bank)
{
	int	i;
	int	swap;

	i = 0;
	if (bank->lim_a > 1 && bank->lim_b > 1)
	{
		swap = stack_a[0];
		while (i <= bank->lim_a - 2)
		{
			stack_a[i] = stack_a[i + 1];
			i++;
		}
		stack_a[bank->lim_a - 1] = swap;
		i = 0;
		swap = stack_b[0];
		while (i <= bank->lim_b - 2)
		{
			stack_b[i] = stack_b[i + 1];
			i++;
		}
		stack_b[bank->lim_b - 1] = swap;
		ft_printf("rr\n");
	}
}

void	ft_rrr(int *stack_a, int *stack_b, t_store *bank)
{
	int	i;
	int	swap;

	i = bank->lim_a - 2;
	swap = stack_a[i + 1];
	if (bank->lim_a > 1)
	{
		while (i >= 0)
		{
			stack_a[i + 1] = stack_a[i];
			i--;
		}
		stack_a[0] = swap;
		i = bank->lim_b - 2;
		swap = stack_b[i + 1];
		while (i >= 0)
		{
			stack_b[i + 1] = stack_b[i];
			i--;
		}
		stack_b[0] = swap;
		ft_printf("rrr\n");
	}
}
