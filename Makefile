# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/06 15:56:37 by hmaciel-          #+#    #+#              #
#    Updated: 2023/01/24 12:45:30 by hmaciel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
SRCSDIR		=	srcs
OBJSDIR		=	objs
INCLUDES	=	includes

SRCS		=	ft_printf/ft_printf.c ft_printf/ft_printf_chars.c ft_printf/ft_printf_numbers.c ft_printf/ft_printf_utils.c \
			 	get_next_line/get_next_line.c get_next_line/get_next_line_utils.c \
				libft/ft_isalnum.c libft/ft_isprint.c libft/ft_memcmp.c libft/ft_putchar_fd.c libft/ft_split.c \
				libft/ft_strlcat.c libft/ft_strncmp.c libft/ft_substr.c libft/ft_atoi.c libft/ft_isalpha.c \
				libft/ft_itoa.c libft/ft_memcpy.c libft/ft_putendl_fd.c libft/ft_strchr.c libft/ft_strlcpy.c \
				libft/ft_strnstr.c libft/ft_tolower.c libft/ft_bzero.c libft/ft_isascii.c \
				libft/ft_memmove.c libft/ft_putnbr_fd.c libft/ft_strdup.c libft/ft_strlen.c libft/ft_strrchr.c \
				libft/ft_toupper.c libft/ft_calloc.c libft/ft_isdigit.c libft/ft_memchr.c libft/ft_memset.c  \
				libft/ft_putstr_fd.c libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_striteri.c libft/ft_strmapi.c \
				libft/ft_lstadd_back.c libft/ft_lstadd_front.c libft/ft_lstclear.c libft/ft_lstdelone.c libft/ft_lstiter.c libft/ft_lstlast.c \
				libft/ft_lstmap.c libft/ft_lstnew.c libft/ft_lstsize.c \
				extras/ft_get_digits.c extras/ft_str_is_numeric.c extras/ft_cmp.c extras/ft_atoll.c extras/ft_count_words.c

CC			= cc
CFLAGS		= -Wall -Wextra -Werror

OBJS		= $(SRCS:%.c=$(OBJSDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Linking $@"
	@ar rc $(NAME) $(OBJS)
	@echo "Done!"

$(OBJS): $(OBJSDIR)/%.o: $(SRCSDIR)/%.c
	@mkdir -p $(@D)
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJSDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: all
	./$(NAME)

.PHONY: all clean fclean re test
