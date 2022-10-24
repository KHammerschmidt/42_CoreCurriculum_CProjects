
# CC = gcc
# CFLAGS = -Wall -Werror -Wextra

# NAME = push_swap

# SRC = push_swap.c \
# 	init_stack.c	\
# 	input_handling.c	\
# 	free_mem.c	\
# 	sort_small.c	\
# 	sort_big.c	\
# 	sorting_utils.c	\
# 	./operations/swap_operations.c	\
# 	./operations/push_operations.c	\
# 	./operations/rotate_operations.c	\
# 	./operations/reverse_rotate_operations.c

# OBJECTS = $(SRC:.c=.o)
# LIBFT_OBJ = ./libft/libft.a

# all: $(NAME)

# $(NAME): $(OBJECTS) $(LIBFT_OBJ)
# 	$(CC) $(CFLAGS) $^ -o $@

# $(LIBFT_OBJ):
# 	make --directory=./libft

# clean:
# 	rm -f $(OBJECTS)
# 	make clean -C ./libft

# fclean:
# 	rm -f $(NAME)
# 	rm -f $(OBJECTS)
# 	make fclean -C ./libft

# re: fclean all



# **************************************************************************** #
#   COLORS                                                                     #
#   COM_COLOR=blue, OBJ_COLOR=green, ERROR_COLOR=red, WARN_COLOR=yellow        #
# **************************************************************************** #
COM_COLOR   := \033[0;34m
OBJ_COLOR   := \033[0;32m
ERROR_COLOR := \033[0;31m
WARN_COLOR  := \033[0;33m


# **************************************************************************** #
#   VARIABLES                                                                  #
# **************************************************************************** #
NAME		:=	push_swap
LIB			:=	libftprintf.a

CC			:= 	gcc
CFLAGS		:= 	-Wall -Werror -Wextra -Iheader
DEPFLAGS	 =	-MMD -MF $(DDIR)$*.d

SDIR		:=	srcs/
ODIR		:= 	obj/
DDIR		:=	$(ODIR)deps/

LIBFT_DIR	:= 	../libft/
LDLIBS		:=	$(LIBFT_DIR)libft.a

SRCS 		:= 	push_swap.c 				\
				init_stack.c				\
				input_handling.c			\
				free_mem.c					\
				sort_small.c				\
				sort_big.c					\
				sorting_utils.c				\
				swap_operations.c			\
				push_operations.c			\
				rotate_operations.c			\
				reverse_rotate_operations.c

OBJS		:=	$(SRCS:%.c=$(ODIR)%.o)
DEPS		:=	$(SRCS:%.c=$(DDIR)%.d)

# **************************************************************************** #
#   RULES                                                                      #
# **************************************************************************** #

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIB)
	@$(CC) $(CFLAGS) -o $@ $(OBJS) $< $(LDLIBS)
	@echo "$(WARN_COLOR)...build executable $(NAME)"

$(LIB): LIBFT $(ODIR) $(DDIR) $(DEPS) $(OBJS)
	@ar -rcs $(LIB) $(OBJS)
	@echo "$(COM_COLOR)...creating: $(LIB)"

$(ODIR)%.o: $(SDIR)%.c $(DDIR)%.d
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(DEPFLAGS) -c $< -o $@

$(ODIR):
	@mkdir -p $(ODIR)
	@echo "$(OBJ_COLOR)...compiling $(LIB)-object-files..."

$(DDIR):
	@mkdir -p $(DDIR)
	@echo "$(OBJ_COLOR)...creating dependency files..."

LIBFT:
	@make bonus -C $(LIBFT_DIR)

clean:
	@rm -rf $(LIB) $(OBJS) $(ODIR) $(DDIR)
	@make clean -C $(LIBFT_DIR)
	@echo "$(ERROR_COLOR)...$(LIB) & object files deleted"
	@echo "$(ERROR_COLOR)...$(NAME) deleted"

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR)

re: fclean all

$(DEPS):
-include $(DEPS)