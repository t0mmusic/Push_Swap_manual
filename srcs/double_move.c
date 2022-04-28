/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:12:21 by jbrown            #+#    #+#             */
/*   Updated: 2022/04/28 15:19:16 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*	This should be changed to just call rotate for both
	stacks, add toggle in rotate and rev rotate to turn off
	printing. */

void	rotate_both(t_list *a, t_list *b, int print)
{
	rotate(a, 0);
	rotate(b, 0);
	if (print)
		ft_printf("rr\n");
}

void	rev_rotate_both(t_list *a, t_list *b, int print)
{
	rev_rotate(a, 0);
	rev_rotate(b, 0);
	if (print)
		ft_printf("rrr\n");
}
