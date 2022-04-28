/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:11:41 by jbrown            #+#    #+#             */
/*   Updated: 2022/04/28 15:16:21 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	check_order(t_list *a, t_list *b)
{
	if (b->next)
	{
		return (1);
	}
	a = a->next;
	while (a->next)
	{
		if (ft_atoi(a->content) > ft_atoi(a->next->content))
		{
			return (1);
		}
		a = a->next;
	}
	return (0);
}

void	manual_move(char *input, t_list *a, t_list *b)
{
	if (!ft_strcmp("pa", input))
		push(b, a, 1);
	if (!ft_strcmp("pb", input))
		push(a, b, 1);
	if (!ft_strcmp("sa", input))
		swap(a, 1);
	if (!ft_strcmp("sb", input))
		swap(b, 1);
	if (!ft_strcmp("ra", input))
		rotate(a, 1);
	if (!ft_strcmp("rb", input))
		rotate(b, 1);
	if (!ft_strcmp("rra", input))
		rev_rotate(a, 1);
	if (!ft_strcmp("rrb", input))
		rev_rotate(b, 1);
	if (!ft_strcmp("rr", input))
		rotate_both(a, b, 1);
	if (!ft_strcmp("rrr", input))
		rev_rotate_both(a, b, 1);
}

int	main(int ac, char **av)
{
	t_list		*a;
	t_list		*b;
	char		*input;

	if (ac == 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	if (error_check(ac, av))
		return (1);
	a = ft_lstnew("a");
	lst_init(a, ac, av);
	b = ft_lstnew("b");
	input = malloc(sizeof(*input) * 3);
	while (check_order(a, b))
	{
		print_stacks(&a, &b);
		scanf("%s", input);
		manual_move(input, a, b);
	}
	print_stacks(&a, &b);
	return (0);
}
