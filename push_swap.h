/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrigaudy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:42:43 by vrigaudy          #+#    #+#             */
/*   Updated: 2022/03/16 17:44:31 by vrigaudy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef "push_swap.h"

# define "push_swap.h"

# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

# include <unistd.h>
# include <stdlib.h>

typedef struct elem
{
	int			num;
	struct elem	*prev;
	struct elem *next;
	int			branch;
}	elem

#endif
