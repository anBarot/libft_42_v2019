# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarot <abarot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 12:18:43 by abarot            #+#    #+#              #
#    Updated: 2020/07/03 22:55:03 by abarot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	./libft.a

SRCS	=	ft_addtoa.c ft_atoi.c ft_bzero.c ft_calloc.c ft_char_to_str.c \
			ft_hextoa.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_putstr_fd.c ft_remove_in_str.c ft_reverse_string.c \
			ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
			ft_toupper.c ft_toupper_string.c ft_utoa.c get_next_line.c \
			ft_count_line.c ft_is_space.c

OBJS	=	$(SRCS:.c=.o)

INCLUDE	=	include

CFLAGS	=	-Werror -Wall -Wextra

RM	=	rm -f

%.o : %.c
	gcc -c $< -o $@ -I$(INCLUDE)

all	:
		make $(NAME)

$(NAME) :	$(OBJS)
			ar -rc $@ $(OBJS)
			ranlib $@

clean	:
		$(RM) $(OBJS) 

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
