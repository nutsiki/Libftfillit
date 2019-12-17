# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moakouda <moakouda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/28 16:17:55 by moakouda          #+#    #+#              #
#    Updated: 2019/11/03 17:05:56 by moakouda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
				ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c \
				ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
				ft_memcmp.c ft_split.c ft_strrchr.c \
				ft_strchr.c ft_strdup.c ft_strjoin.c \
				ft_strlcat.c ft_strlcpy.c ft_strlen.c \
				ft_strnstr.c ft_substr.c ft_strcpy.c \
				ft_tolower.c ft_toupper.c ft_strncmp.c \
				ft_itoa.c ft_strtrim.c ft_strmapi.c ft_putchar_fd.c \
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ= $(SRC:.c=.o)

OBJBONUS = $(BONUS:.c=.o)

CC= gcc
RM= rm -rf
CFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking all files into .a file..."
	@ar rc $@ $(OBJ)
	@ranlib $@
	@echo "Linked"

%.o: %.c
	@echo "Compiling $< into .o file..."
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@echo "Deleting all .o..."
	@$(RM) $(OBJ) $(OBJBONUS)
	@echo "Deleted"

fclean: clean
	@echo "Deleting library..."
	@$(RM) $(NAME) $(OBJBONUS)
	@echo "Deleted"

re: fclean all

rebonus: fclean bonus

bonus: $(OBJBONUS) $(OBJ)
	@echo "Linking all files into .a file..."
	@ar rc $(NAME) $(OBJBONUS) $(OBJ)
	@ranlib $(NAME)
	@echo "Linked"

.PHONY : all clean fclean re bonus
