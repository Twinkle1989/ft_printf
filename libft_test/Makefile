# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsolanki <tsolanki@student.hive.fi>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 14:43:43 by tsolanki          #+#    #+#              #
#    Updated: 2024/04/23 14:00:38 by tsolanki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME = libft.a

# compiler command and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Sources files with bonus as well
SRCS = ft_isdigit.c ft_strchr.c ft_tolower.c ft_strlcat.c \
       ft_bzero.c ft_isprint.c ft_strlcpy.c ft_toupper.c \
       ft_isalnum.c ft_memcpy.c ft_strlen.c \
       ft_isalpha.c ft_memmove.c ft_strncmp.c \
       ft_isascii.c ft_memset.c ft_strrchr.c ft_memchr.c ft_memcmp.c \
	   ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	   ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c ft_lstclear_bonus.c \
		ft_lstiter_bonus.c ft_lstmap_bonus.c
		
# object files generation from source files
SRC_OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

# required header file for compilation
HEADER = libft.h

#command to remove files
RM = rm -f

# command to create archive for object files (.o files)
AR = ar rcs

# DEFAULT RULE to make everything call it $(NAME) target
all: $(NAME)

# Rule to compile .c to .o
# ($<, the first dependency which is the source file) 
# into an object file ($@, the target file) without linking -c
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to make the program: rule to make the final library archive file
$(NAME): $(SRC_OBJS)
	$(AR) $(NAME) $(SRC_OBJS)

# Rule to build the bonus functions and add then to the library
bonus: .bonus

# rule for the above bonus file
.bonus: $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)
	@touch .bonus

# Rule to clean the object files from source and bonus
clean:
	$(RM) $(SRC_OBJS)
	$(RM) $(BONUS_OBJS)

# Rule full clean up (object files and library)
fclean: clean
	$(RM) $(NAME)
	$(RM) .bonus

# Rule to recompile everything
re: fclean all


# .PHONY specifies targets that aren't files, 
# preventing conflicts with files of t he same name
.PHONY: all clean fclean re bonus
