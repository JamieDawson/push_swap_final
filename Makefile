# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jadawson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/05 18:40:48 by jadawson          #+#    #+#              #
#    Updated: 2018/11/12 23:06:45 by jadawson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

CHECKER_NAME = checker

PUSH_SWAP_NAME = push_swap

LIBFT = libft/libft.a

CHECKER_HEADER = check_header.h

GNL_HEADER = gnl/get_next_line.h

GNL_C = gnl/get_next_line.c

CHECKER_SOURCES = checker.c sa.c sb.c ss.c pa.c pb.c ra.c rb.c rr.c \
				  rra.c rrb.c rrr.c grab_command.c find_command.c \
				  first_confirmed_ordered.c final_confirmed_ordered.c \
				  min_finder.c alg_file.c str_n_file.c free_here.c \

PUSH_SWAP_SOURCES = push_swap.c sa.c sb.c ss.c pa.c pb.c ra.c rb.c \
					rr.c rra.c rrb.c rrr.c grab_command.c find_command.c \
					first_confirmed_ordered.c final_confirmed_ordered.c \
					min_finder.c alg_file.c sort_three.c \
					sort_three_solutions.c my_insert_sort.c \
					confirming_digits.c  range.c\
					is_b_ordered.c smallest_finder.c \
				  	biggest_finder.c tot_b.c send_entire_b_to_a.c \
					b_helper_functs.c helper_ra_rra.c sort_five.c \
					str_n_file.c bulky_med.c bulky_large.c jumbo_list.c \
					free_here.c

all: $(CHECKER_NAME)

$(CHECKER_NAME):
	@echo "\033[33mcreating the checker executable!\033[0m"
	@$(CC) $(CFLAGS) -I $(CHECKER_HEADER) \
	   -I $(GNL_HEADER) $(GNL_C)  $(LIBFT) $(CHECKER_SOURCES) -o $(CHECKER_NAME)
	@echo "\033[33mcreating the push_swap executable!\033[0m"
	@$(CC) $(CFLAGS) -I $(CHECKER_HEADER) \
		-I $(GNL_HEADER) $(GNL_C) $(LIBFT) $(PUSH_SWAP_SOURCES) -o $(PUSH_SWAP_NAME)
	   
clean:
	@echo "\033[31mObjects cleaned!\033[0m"
	@rm -f $(OBJECTS)

fclean: clean
	@echo "\033[31mExecutables cleaned!\033[0m"
	@rm -f $(CHECKER_NAME)
	@rm -f $(PUSH_SWAP_NAME)

re: fclean all

checker_leaks:
	@echo "\033[32mYou can now test checker in lldb\033[0m"
	@$(CC) $(CFLAGS) -I $(CHECKER_HEADER) -o checker -g -fsanitize=address -I \
		 $(GNL_HEADER) $(GNL_C)  $(LIBFT) $(CHECKER_SOURCES)
push_leaks:
	@echo "\033[32mYou can now test push_swap in lldb\033[0m"
	@$(CC) $(CFLAGS) -I $(CHECKER_HEADER) -o push_swap -g -fsanitize=address -I \
	   	$(GNL_HEADER) $(GNL_C) $(LIBFT) $(PUSH_SWAP_SOURCES) 
