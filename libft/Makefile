NAME = libft.a
SRCS = isalpha isdigit isalnum isascii isprint strlen memset bzero memcpy memmove strlcpy strlcat toupper tolower strchr strrchr strncmp memchr memcmp strnstr atoi calloc strdup substr strjoin strtrim split itoa strmapi striteri putchar_fd putstr_fd putendl_fd putnbr_fd 
SRCS_BONUS = lstnew lstadd_front lstsize lstlast lstadd_back lstdelone lstclear lstiter lstmap 
AR = ar rcs
CFLAGS = -Wall -Werror -Wextra
CC = cc
RM = rm -f

all : $(NAME)

$(NAME) : $(addprefix ft_,$(addsuffix .c,$(SRCS)))
	$(CC) $(CFLAGS) -c $(addprefix ft_,$(addsuffix .c,$(SRCS)))
	$(AR) $(NAME) $(addprefix ft_,$(addsuffix .o,$(SRCS)))

bonus : $(NAME)
	$(CC) $(CFLAGS) -c $(addprefix ft_,$(addsuffix .c,$(SRCS) $(SRCS_BONUS)))
	$(AR) $(NAME) $(addprefix ft_,$(addsuffix .o,$(SRCS) $(SRCS_BONUS)))

clean :
	$(RM) $(addprefix ft_,$(addsuffix .o,$(SRCS) $(SRCS_BONUS)))	

fclean : clean
	$(RM) $(NAME)

re : fclean all
