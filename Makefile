# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/05 15:36:34 by aabduvak          #+#    #+#              #
#    Updated: 2022/02/11 01:14:54 by aabduvak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS_SR			=	sources/server.o
OBJS_CL			=	sources/client.o
OBBN_SR			=	bonus/server_bonus.o
OBBN_CL			=	bonus/client_bonus.o

NAME_SR			=	server
NAME_CL			=	client
INCS			=	./libft
INCS_PRT		=	./libft/ft_printf/sources
LIB				=	libft.a
CC				=	gcc
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -I$(INCS) -I$(INCS_PRT)


all : $(NAME_CL) $(NAME_SR)

$(LIB) :
	make -C $(INCS)

$(NAME_CL) : $(LIB) $(OBJS_CL) 
	${CC} ${CFLAGS} ${OBJS_CL} -o ${NAME_CL} $(INCS)/$(LIB) 
	
$(NAME_SR) : $(LIB) $(OBJS_SR) 
	${CC} ${CFLAGS} ${OBJS_SR} -o ${NAME_SR} $(INCS)/$(LIB) 
	
.c.o :
	${CC} ${CFLAGS} -c $^ -o $@

clean :
	${RM} ${OBJS_CL} $(OBJS_SR) ${OBBN_CL} $(OBBN_SR)

ffclean : clean fclean
	make fclean -C ./libft
	make fclean -C ./libft/ft_printf

fclean : clean
	${RM} ${NAME_CL} $(NAME_SR)

norm :
	norminette sources/*.[ch]

re : fclean all

run :
	@./$(NAME)

bonus : $(OBBN_CL) $(OBBN_SR) $(LIB)
	${CC} ${CFLAGS} $(OBBN_CL) -o ${NAME_CL} $(INCS)/$(LIB)
	${CC} ${CFLAGS} $(OBBN_SR) -o ${NAME_SR} $(INCS)/$(LIB)

help :
	@echo "------------------------------------ <<HELP COMMAND>> ------------------------------------"
	@echo ""
	@echo "make         --------- will compile all *.c files and create libft.a library"
	@echo "make bonus   --------- will compile all bonus functions and create libft.a library"
	@echo "make clean   --------- will clean all *.o files in sources"
	@echo "make fclean  --------- will clean all *.o files in sources and executable file"
	@echo "make ffclean --------- will clean all *.o, *.a and executable files in all folders"
	@echo "make re      --------- will clean all files and compiles again"
	@echo "make norm    --------- will control all *.c and *.h codes to norminette standart"
	@echo "             --------- if finds norminette error will break"

.PHONY: all clean fclean re .c.o bonus