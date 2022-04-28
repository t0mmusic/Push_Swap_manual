/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:39:27 by jbrown            #+#    #+#             */
/*   Updated: 2022/04/28 15:10:58 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"

/*	Initialisation/printing */
void	print_stacks(t_list **a, t_list **b);
void	lst_init(t_list *a, int ac, char **av);
int		error_check(int ac, char **av);

/*	Stack movement */
void	push(t_list *src, t_list *dst, int print);
void	swap(t_list *stack, int print);
void	rotate(t_list *a, int print);
void	rotate_both(t_list *a, t_list *b, int print);
void	rev_rotate(t_list *a, int print);
void	rev_rotate_both(t_list *a, t_list *b, int print);

/*	Small sort functions */
void	small_sort(t_list *a, t_list *b, t_list *group);
void	three_nums(t_list *a);

/*	Group allocation functions */
int		group_split(t_list *stack);
void	group_push(t_list *a, t_list *b, t_list *group, int groupsize);
void	sort_group(t_list *a, t_list *b);

/*	Functions for finding specific numbers */
char	*find_max(t_list *stack);
char	*find_min(t_list *stack);
char	*find_range(t_list *a, t_list *group, int groupsize);
char	*find_next(t_list *stack, char *current);
char	*find_previous(t_list *stack, char *current);

/* Logic Functions */
void	smart_rotate(t_list *stack, int match);
int		rotate_check(t_list *stack);
t_list	*order_check(t_list *stack);
char	*closest_to_edge(t_list *stack, t_list *reference);

/*	Free data	*/
void	free_stack(t_list *stack);
void	free_stacks(t_list *a, t_list *b, t_list *group);

#endif
