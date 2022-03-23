/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:23:50 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/03/23 22:53:38 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sa(int *stack_a, t_store *bank)
{
	int	swap;

	if (bank->lim_a > 2)
	{
		swap = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = swap;
		ft_printf("sa\n");
	}
}

void	ft_pa(int *stack_a, int *stack_b, t_store *bank)
{
	int	i;
	int	j;

	i = bank->lim_a - 1;
	j = 0;
	if (bank->lim_b > 0)
	{
		while (i >= 0)
		{
			stack_a[i + 1] = stack_a[i];
			i--;
		}
		stack_a[0] = stack_n[0];
		while (j <= bank->lim_b - 2)
		{
			stack_b[j] = stack_b[j + 1];
			j++;
		}
		bank->lim_a = bank->lim_a + 1;
		bank->lim_b = bank->lim_b - 1;
		ft_printf("pa\n");
	}
}

void	ft_ra(int *stack_a, t_store *bank)
{
	int	i;
	int	swap;

	i = 0;
	swap = stack_a[0];
	if (bank->lim_a > 1)
	{
		while (i <= bank->lim_a - 2)
		{
			stack_a[i] = stack_a[i + 1];
			i++;
		}
		stack_a[bank->lim_a - 1] = swap;
		ft_printf("ra\n");
	}
}

void	ft_rra(int *stack_a, t_store *bank)
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
		ft_printf("rra\n");
	}
}
