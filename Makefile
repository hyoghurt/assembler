# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyoghurt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/06 15:44:49 by hyoghurt          #+#    #+#              #
#    Updated: 2021/03/26 00:08:01 by hyoghurt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libasm.a
SRCS	= ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s
OBJS	= $(SRCS:.s=.o)

%.o:	%.s
		nasm -fmacho64 $^ -o $@

$(NAME):$(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

all:	$(NAME)

clean:	
		rm -rf $(OBJS)

fclean:	clean
		rm -rf $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
