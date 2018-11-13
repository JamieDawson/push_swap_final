/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_header.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 14:36:53 by jadawson          #+#    #+#             */
/*   Updated: 2018/11/13 11:53:20 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_HEADER_H
# define CHECK_HEADER_H
# include "libft/libft.h"
# include "gnl/get_next_line.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct	s_nums{
	long			num;
	struct s_nums	*next;
}				t_nums;


void			above_int_max(long long nbr);//free a here
void			confirm_digit(int argc, char **argv);
long long		ft_atoi_digit_confirm(const char *str);//free a
int				is_space(char c);
void			dup_check_ps(t_nums *head, int nbr);//free a
void			dup_check_c(t_nums *head, int nbr, t_nums **a);//done
t_nums			*create_a_list_ps(int argc, char **argv);
t_nums			*create_a_list_c(int argc, char **argv, t_nums **a);//dup done

void			free_here(t_nums **all);
int				before_push_b(t_nums **a, t_nums **b);
void			print_list(t_nums *nums);
int				sort_five(t_nums **a, t_nums **b, int i);
int				five_pb_first_nums(t_nums **a, t_nums **b, int i);
char			**str_n(int argc, char **argv);
int				rb_or_rrb_one_hun_one(t_nums **a, t_nums **b, int pos, int i);
int				ra_x_amount(t_nums **a, int pos);
int				rra_x_amount(t_nums **a, int pos);
int				a_which_x_amount(t_nums **a, int range_pos);
int				b_small_pos_funct(t_nums *b, int b_smallest);
void			print_list(t_nums *nums);
int				a_which_x_amount(t_nums **a, int pos);
int				rrb_x_amount(t_nums **b, int pos);
int				rb_x_amount(t_nums **b, int pos);
int				which_x_amount(t_nums **b, int pos);
int				b_empty_or_one(t_nums **a, t_nums **b);
int				bulky_large(t_nums **a, t_nums **b, int i);
int				range_pos_funct(t_nums *a, int local_max);
int				pos_for_b(t_nums **a, t_nums **b);
int				bulky_med(t_nums **a, t_nums **b, int i);
int				bulky_list(t_nums **a, t_nums **b, int i, int numbers);
int				jumbo(t_nums **a, t_nums **b, int i);
int				is_b_ordered(t_nums *b);
int				is_a_empty(t_nums *a);
long			biggest_finder(t_nums *a);
long			smallest_finder(t_nums *b);
int				sort_b_big_or_small(t_nums **a, t_nums **b);
int				range(t_nums *a, int local_max);
int				bottom_b_value(t_nums *b);
int				tot_b(t_nums *b);
int				pa_final(t_nums **a, t_nums **b);
int				large_to_top_of_b(t_nums **a, t_nums **b);
int				b_largest_location(t_nums *b, long b_largest);
int				rb_or_rrb_one_hundered(t_nums **a, t_nums **b, int tot);
int				rb_or_rrb_one_hun_two(t_nums **a, t_nums **b, int pos, int tot);
int				ra_or_rra(t_nums **a, int tot, int pos);
int				ra_or_rra_two(t_nums **a, int tot_minus_pos, int i);
int				tot_value(t_nums *a);
int				pos_finder(t_nums *a, int pos, int small);
int				push_and_i(t_nums **a, t_nums **b);
int				push_and_find(t_nums **a, t_nums **b, int small);
int				push_b_and_write(t_nums **a, t_nums **b);
int				sort_three_sa_and_rra(t_nums **a);
int				sort_three_sa_and_ra(t_nums **a);
int				sort_three_sa_and_write(t_nums **a);
int				sort_three_ra_and_write(t_nums **a);
int				sort_three_rra_and_write(t_nums **a);
int				sort_three(t_nums **a);
void			write_ok(void);
int				min_finder(t_nums *a, int min);
int				my_insert_sort(t_nums **a, t_nums **b, int i);
int				ft_isdigitsss(char c);
void			swap_a(t_nums **nums);
void			swap_b(t_nums **nums);
void			ss(t_nums **a, t_nums **b);
void			rotate_a(t_nums **nums);
void			rotate_b(t_nums **nums);
void			rr(t_nums **a, t_nums **b);
void			reverse_rotate_a(t_nums **nums);
void			reverse_rotate_b(t_nums **nums);
void			rrr(t_nums **a, t_nums **b);
void			push_a(t_nums **a, t_nums **b);
void			push_b(t_nums **a, t_nums **b);
void			print_list(t_nums *nums);
int				first_confirmed_ordered(t_nums *nums);
int				final_confirmed_ordered(t_nums *nums, t_nums *b);
void			apply_command(char *str, t_nums **a, t_nums **b);
int				grab_command(t_nums **a, t_nums **b);
#endif
