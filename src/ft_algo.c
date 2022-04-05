/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 17:57:29 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/04/05 18:53:00 by vrigaudy         ###   ########.fr       */
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

static void	ft_radix(stack_a, stack_b, bank)
{
	int	i;
	int	pow;
	
	i = 0;
	pow = 0;
}

void	ft_algo(int *stack_a, int *stack_b, t_store *bank)
{
	int	i;
	int *mirror;

	i = 0;
	mirror = malloc(sizeof(int) * bank->size);
	if (!mirror)
		return ;	
	ft_transform(stack_a, mirror, bank);
	free(mirror);
	if (bank->size <= 3 && bank->size >= 1)	
		ft_size_is_1_to_3(stack_a, bank);
	if (bank->size <= 6 && bank->size >= 4)	
		ft_size_is_4_to_6(stack_a, stack_b, bank);
	else
		ft_radix(stack_a, stack_b, bank);
}
