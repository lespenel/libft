NAME := libft.a

INCLUDE_DIR := include

BUILD_DIR := .build

SRC_DIR := src

include src.mk

MY_OBJECT := $(addprefix $(BUILD_DIR)/, $(SRC:.c=.o))

DEPS := $(OBJ:.o=.d)

CFLAGS := -Wall -Werror -Wextra -I$(INCLUDE_DIR)

DFLAGS := -MD -MP

-include $(DEPS)

.PHONY: all
all : $(NAME)

$(NAME) : $(MY_OBJECT)
	$(AR) rc $(NAME) $(MY_OBJECT)

$(BUILD_DIR)/%.o : $(SRC_DIR)/%.c
	@mkdir -p $(shell dirname $@)
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: clean
clean :
	$(RM) -r $(BUILD_DIR)

.PHONY: fclean
fclean : clean
	$(RM) $(NAME)

.PHONY: re
re : fclean all
