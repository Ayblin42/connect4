CC			=	gcc

FLAGS		=	-Wall -Werror -Wextra -g3

RM			=	rm -f

SRCS		=	gnl/get_next_line_utils.c				\
				gnl/get_next_line.c						\
				$(addprefix srcs/, 						\
				display.c								\
				check_direction.c						\
				main.c)


OBJS		=	${SRCS:.c=.o}

LIBS		=	-lreadline

LIBFT		=	libft/libft.a

NAME		=	connect4

all			:	${LIBFT}	${NAME}

${NAME}		:	${LIBFT} inc/connect.h ${OBJS}
				${CC} ${FLAGS} ${OBJS} ${LIBFT} ${LIBS} -o ${NAME}

${LIBFT}	:
				make -C libft/ bonus

.c.o		:
				${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean		:
				${RM} ${OBJS}
				make -C libft/ clean

fclean		:	clean
				${RM} ${NAME}
				make -C libft/ fclean

re			:	fclean	all

.PHONY		:	all clean fclean re libft
