# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agutierr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/04 15:02:39 by agutierr          #+#    #+#              #
#    Updated: 2019/12/04 15:04:59 by agutierr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c\
	   ft_memcmp.c ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_strchr.c\
	   ft_strrchr.c ft_strnstr.c ft_strncmp.c\
	   ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	   ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c\
	   ft_strjoin.c ft_substr.c ft_split.c ft_strtrim.c ft_itoa.c\
	   ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
	   ft_putnbr_fd.c

BNS =	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\

OBJS = $(SRCS:.c=.o)

B_OBJ = $(BNS:.c=.o)

INCLUDES = ./
all:$(NAME)
$(NAME):$(SRCS) libft.h
		gcc -Wall -Werror -Wextra -I$(INCLUDES) -c $(SRCS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

bonus:
	gcc $(CFLAGS) -g -O -c $(BNS)
	ar -r $(NAME) $(B_OBJ)
	ranlib $(NAME)

clean:
		$(RM) $(OBJS) $(B_OBJ)
fclean:		clean
		$(RM) $(NAME)
re:			fclean all
