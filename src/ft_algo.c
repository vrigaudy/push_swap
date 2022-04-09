/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:57:29 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/04/09 17:55:14 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_transform(int *stack_a, int *mirror, t_store *bank)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < bank->size)
	{
		swap = 0;
		j = 0;
		while (j < bank->size)
		{
			if (stack_a[j] < stack_a[i])
				swap++;
			j++;
		}
		mirror[i++] = swap;
	}
	i = 0;
	while (i < bank->size)
	{
		stack_a[i] = mirror[i];
		i++;
	}
}

static int	ft_check_order(int *stack_a, t_store *bank)
{
	int	i;

	i = 0;
	while (i < bank->size - 1)
	{
		if (stack_a[i] + 1 != stack_a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

static void	ft_radix(int *stack_a, int *stack_b, t_store *bank)
{
	int	i;
	int	pow;

	i = 0;
	pow = 0;
	while (ft_check_order(stack_a, bank) == 1)
	{
		while (i < bank->size)
		{
			if ((stack_a[0] >> pow) & 1)
				ft_ra(stack_a, bank);
			else
				ft_pb(stack_b, stack_a, bank);
			i++;
		}
		while (bank->lim_b > 0)
			ft_pa(stack_a, stack_b, bank);
		i = 0;
		pow++;
	}
}

void	ft_algo(int *stack_a, int *stack_b, t_store *bank)
{
	int	i;
	int	*mirror;

	i = 0;
	mirror = malloc(sizeof(int) * bank->size);
	if (!mirror)
		return ;
	ft_transform(stack_a, mirror, bank);
	free(mirror);
	if (ft_check_order(stack_a, bank) == 1)
	{
		if (bank->size <= 3 && bank->size >= 1)
			ft_size_is_1_to_3(stack_a, bank);
		if (bank->size <= 6 && bank->size >= 4)
			ft_size_is_4_to_6(stack_a, stack_b, bank);
		else
			ft_radix(stack_a, stack_b, bank);
	}
}
