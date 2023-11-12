NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_toupper.c \
		  ft_tollower.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strnstr.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_atoi.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_lstnew_bonus.c \

MY_OBJECT = $(SOURCES:.c=.o)

$(NAME) :  $(MY_OBJECT)
	ar rc $(NAME) $(MY_OBJECT)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	rm -f $(MY_OBJECT)

fclean : clean
	rm -f $(NAME)

re : fclean all

all : $(NAME)

.PHONY: clean fclean re all
