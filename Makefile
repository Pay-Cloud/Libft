# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmeziyan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/13 18:15:03 by mmeziyan          #+#    #+#              #
#    Updated: 2017/02/28 20:01:20 by mmeziyan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#_Colors_#

GREEN	=	echo "\x1b[32m $1 \x1b[0m $2"
 
PURPLE	=	echo "\x1b[35m $1 \x1b[0m $2"

#_Files_#

NAME	=	libft.a

SRC 	=	ft_putnbr_fd.c		\
			ft_putnbr.c			\
			ft_strclr.c			\
			ft_strcmp.c			\
			ft_strequ.c			\
			ft_strjoin.c		\
			ft_strlen.c			\
			ft_strnequ.c		\
			ft_strnew.c			\
			ft_tolower.c		\
			ft_toupper.c		\
			ft_putchar.c		\
			ft_putchar_fd.c		\
			ft_putstr.c			\
			ft_putstr_fd.c		\
			ft_putendl.c		\
			ft_putendl_fd.c		\
			ft_isdigit.c		\
			ft_isalpha.c		\
			ft_isalnum.c		\
			ft_isupper.c		\
			ft_islower.c		\
			ft_isprint.c		\
			ft_isascii.c		\
			ft_strcpy.c			\
			ft_strcat.c			\
			ft_strncat.c		\
			ft_strlcat.c		\
			ft_strdup.c			\
			ft_memset.c			\
			ft_bzero.c			\
			ft_memcpy.c			\
			ft_memccpy.c		\
			ft_memalloc.c		\
	 		ft_strchr.c			\
			ft_strrchr.c		\
			ft_strstr.c			\
			ft_atoi.c			\
			ft_strdel.c			\
			ft_striter.c		\
			ft_memdel.c			\
			ft_itoa.c			\
			ft_strmap.c			\
			ft_strmapi.c		\
			ft_striteri.c		\
			ft_strtrim.c		\
			ft_strsub.c			\
			ft_memmove.c		\
			ft_memchr.c			\
			ft_memcmp.c			\
			ft_strncmp.c		\
			ft_strncpy.c		\
			ft_strnstr.c		\
			ft_strsplit.c		\
			get_next_line.c	\
			my_printf.c			\

OBJ		=	$(SRC:.c=.o)

#_Compilation__________________________#

FLAG 	=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME):          
	@$(call PURPLE,"=== Compilation of Libft"\t\t\t"LOADING")
	@gcc $(FLAG) -c -I ./includes $(SRC)
	@$(call PURPLE,"=== Compilation in progress"\t\t\t"LOADING")
	@ar rc $(NAME) $(OBJ)
	@$(call GREEN,"=== $(NAME) created"\t\t\t\t"DONE")

clean:
	@rm -f $(OBJ)
	@$(call GREEN,"=== .o files deleted"\t\t\t\t"DONE")

fclean:
	@rm -f $(OBJ)
	@rm -f $(NAME)
	@$(call GREEN,"=== Repository is clean"\t\t\t"DONE")

re: fclean all

.PHONY: clean fclean 
