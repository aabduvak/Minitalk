# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/24 01:44:57 by aabduvak          #+#    #+#              #
#    Updated: 2022/02/05 16:00:37 by aabduvak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c  ft_isascii.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c
OBJS			= $(SRCS:.c=.o)

BONUS			=	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
					ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
					ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
BONUS_OBJS		= $(BONUS:.c=.o)

INCS	= ./ft_printf
NAME	= libft.a
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
LIB		= libftprintf.a


all : $(LIB) ${NAME}

$(LIB) : 
	make -C $(INCS)

$(NAME) : ${OBJS}
	cp $(INCS)/$(LIB) ./$(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean :
	${RM} ${OBJS} ${BONUS_OBJS}

fclean : clean
	${RM} ${NAME}

norm :
	norminette *.[ch]

re : fclean all

bonus :	$(OBJS) $(BONUS_OBJS)
	cp $(LIB) ./$(NAME)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	ranlib $(NAME)

help :
	@echo "------------------------------------ <<HELP COMMAND>> ------------------------------------"
	@echo ""
	@echo "make        --------- will compile all *.c files and create libft.a library"
	@echo "make bonus  --------- will compile all bonus functions and create libft.a library"
	@echo "make clean  --------- will clean all *.o files in sources"
	@echo "make fclean --------- will clean all *.o files in sources and libft.a library"
	@echo "make re     --------- will clean all files and compiles again"
	@echo "make norm   --------- will control all *.c and *.h codes to norminette standart"
	@echo "            --------- if finds norminette error will break"

.PHONY: all clean fclean re .c.o bonus