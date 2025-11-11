# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wabin-wa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/07 20:08:59 by wabin-wa          #+#    #+#              #
#    Updated: 2025/11/11 16:20:50 by wabin-wa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
DIR = ft_printf

LIBFT_NAME = libft.a
LIBFT_DIR = libft

SRCS = printf printf_helper

FLAGS = -Wall -Werror -Wextra

CC = cc

RM = rm -rf

AR = ar rcs

MAKE = make

CP = cp

all : $(NAME)

$(NAME) : $(LIBFT_DIR) $(addprefix $(DIR)/,$(addprefix ft_,$(addsuffix .c, $(SRCS))))
	$(MAKE) -C $(LIBFT_DIR) $(LIBFT_NAME)
	$(CP) $(LIBFT_DIR)/$(LIBFT_NAME) $(NAME)
	$(CC) $(FLAGS) -c $(addprefix $(DIR)/,$(addprefix ft_,$(addsuffix .c, $(SRCS))))
	$(AR) $(NAME) $(addprefix ft_,$(addsuffix .o, $(SRCS)))


clean :
	$(RM) $(addprefix ft_, $(addsuffix .o, $(SRCS)))
	$(MAKE) -C $(LIBFT_DIR) clean

fclean : clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re : fclean all

