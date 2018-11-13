# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jadawson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/03 23:56:36 by jadawson          #+#    #+#              #
#    Updated: 2018/09/25 20:13:59 by jadawson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -c

NAME = libft.a

SOURCES = ft_putchar_fd.c ft_strcmp.c ft_strlen.c ft_strrchr.c ft_atoi.c \
	  ft_memccpy.c    ft_putendl.c    ft_strcpy.c     ft_strmap.c ft_strsplit.c  \
	  ft_bzero.c      ft_memchr.c     ft_putnbr.c     ft_strdel.c     ft_strmapi.c \
      	  ft_strstr.c ft_isalnum.c    ft_memcmp.c     ft_putnbr_fd.c  ft_strdup.c \
	  ft_strncat.c    ft_strsub.c ft_isalpha.c    ft_memcpy.c     ft_putstr.c \
	  ft_strequ.c     ft_strncmp.c    ft_strtrim.c  ft_isascii.c    ft_memdel.c \
	  ft_putstr_fd.c  ft_striter.c    ft_strncpy.c    ft_tolower.c  ft_isdigit.c \
      	  ft_memmove.c    ft_strcat.c     ft_striteri.c   ft_strnequ.c    ft_toupper.c \
	  ft_isprint.c    ft_memset.c     ft_strchr.c     ft_strjoin.c    ft_strnew.c \
	  ft_itoa.c       ft_putchar.c    ft_strclr.c     ft_strlcat.c    ft_strnstr.c \
	  ft_memalloc.c	ft_putendl_fd.c ft_count_words.c ft_numlen.c	ft_lstnew.c \
	  ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_swap.c \
	 ft_strrev.c  ft_is_prime.c 

OBJECTS = $(SOURCES:%.c=%.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCES)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
