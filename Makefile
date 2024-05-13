# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 22:05:50 by tsolanki          #+#    #+#              #
#    Updated: 2024/05/10 22:10:15 by tsolanki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT_DIR = ./libft_test/
LIBFT = $(LIBFT_DIR)libft.a
SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthexa.c ft_putaddress.c ft_putunsigned.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR)
AR = ar rcs
RM = rm -f

# Compilation
all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(AR) $(NAME) $(OBJS) $(LIBFT_DIR)*.o

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Cleaning rules
clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re