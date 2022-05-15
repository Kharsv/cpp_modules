SRCS		= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS		= ${SRCS:.cpp=.o}
DEPS		= ${SRCS:.cpp=.d}
NAME		= ex00
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -f

all:		${NAME}


$(NAME):	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}


%.o:		%.cpp
			${CC} ${CFLAGS} -c $< ${DEPFLAGS}

clean:
			${RM} ${OBJS} ${DEPS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re