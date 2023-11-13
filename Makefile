NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c \
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
		  ft_putnbr_fd.c

SRC_BONUS = ft_lstnew_bonus.c \
	    ft_lstadd_front_bonus.c \
	    ft_lstsize_bonus.c \
	    ft_lstlast_bonus.c \
	    ft_lstadd_back_bonus.c \
	    ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

BONUS_OBJ = $(SRC_BONUS:.c=.o)

MY_OBJECT = $(SRC:.c=.o)

$(NAME) :  $(MY_OBJECT)
	ar rc $(NAME) $(MY_OBJECT)

bonus :
	$(MAKE) $(NAME) SRC="$(SRC) $(SRC_BONUS)"

%.o : %.c libft.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	rm -f $(MY_OBJECT) $(BONUS_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

all : $(NAME)

.PHONY: clean fclean re bonus all
