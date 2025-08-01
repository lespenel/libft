NAME := libft.a
NAME_DEBUG := libft_debug.a

BUILDDIR := build
INCLUDE_DIR := include
SRC_DIR := src

include src.mk

CFLAGS := -Wall -Werror -Wextra -I$(INCLUDE_DIR)
DFLAGS := -MD -MP

MODE ?= release
ifeq ($(MODE), debug)
	NAME := $(NAME_DEBUG)
	DEBUGFLAGS := -g
	BUILDDIR := $(BUILDDIR)_debug
else
	DEBUGFLAGS :=
endif

OBJ := $(patsubst %.c, $(BUILDDIR)/%.o, $(SRC))
DEP := $(patsubst %.c, $(BUILDDIR)/%.d, $(SRC))

.PHONY: all
all: $(NAME)

.PHONY: debug
debug:
	$(MAKE) MODE=debug

$(NAME): $(OBJ)
	$(AR) rc $(NAME) $^

-include $(DEPS)
$(BUILDDIR)/%.o : $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(DEBUGFLAGS) -o $@ -c $<

.PHONY: clean
clean:
	$(RM) -r $(BUILDDIR) $(BUILDDIR)_debug

.PHONY: fclean
fclean: clean
	$(RM) $(NAME) $(NAME_DEBUG)

.PHONY: re
re: fclean all
