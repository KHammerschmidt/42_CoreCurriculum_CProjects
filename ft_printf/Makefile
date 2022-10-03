NAME		=	libftprintf.a
CC			= 	gcc
CFLAGS		= 	-Wall -Werror -Wextra -Iheader
OBJ_DIR		= 	./obj/
SRC_DIR		=	./srcs/

# COLORS - COM_COLOR=blue, OBJ_COLOR=green, ERROR_COLOR=red, WARN_COLOR=yellow
COM_COLOR   = 	\033[0;34m
OBJ_COLOR   = 	\033[0;32m
ERROR_COLOR = 	\033[0;31m
WARN_COLOR  = 	\033[0;33m

SRC 		= 	ft_printf.c 	 			ft_conversion.c 		\
				ft_print_char.c 			ft_print_string.c 		\
				ft_print_hexa.c 			ft_print_int.c 			\
				ft_print_unsigned_int.c 	ft_itoa_unsigned.c

OBJ			=	$(patsubst %.c,$(OBJ_DIR)%.o,$(SRC))
LIBFT_OBJ	=	../libft/obj/*.o

$(NAME): $(OBJ_DIR) $(OBJ) LIBFT_OBJECTS
	@ar -rcs $(NAME) $(OBJ) $(LIBFT_OBJ)
	@echo "$(COM_COLOR)...creating: $(NAME)"

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)
	@echo "$(OBJ_COLOR)...compiling $(NAME)-object-files..."

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

LIBFT_OBJECTS:
	@make -C ../libft/

clean:
	@rm -f $(OBJECTS)
	@rm -rf $(OBJ_DIR)
	@make clean -C ../libft/
	@echo "$(ERROR_COLOR)...$(NAME)-object files deleted"

fclean: clean
	@rm -f $(NAME)
	@rm -f ../libft/libft.a

re: fclean all

.PHONY: all clean fclean re

