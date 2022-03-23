/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:42:43 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/03/23 22:53:36 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"

# include <unistd.h>
# include <stdlib.h>

void	ft_check_stack(int ac, char **av);

void	ft_ra(int *stack_a, t_store *bank);
void	ft_sa(int *stack_a, t_store *bank);
void	ft_rra(int *stack_a, t_store *bank);
void	ft_pa(int *stack_a, int *stack_b, t_store *bank);

void	ft_rb(int *stack_b, t_store *bank);
void	ft_sb(int *stack_b, t_store *bank);
void	ft_rrb(int *stack_b, t_store *bank);
void	ft_pb(int *stack_b, int *stack_a, t_store *bank);

typedef struct	s_store
{
	int	size;
	int	lim_a;
	int	lim_b;
	int	sorted_size;
	int	sorted_start;
}				t_store;

#endif
