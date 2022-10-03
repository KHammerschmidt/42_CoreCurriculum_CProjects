NAME			=		gnl

CC				=		gcc
CFLAGS			=		-Wall -Werror -Wextra
CFLAGS-1		=		-D BUFFER_SIZE=42

OBJ_DIR			=		./obj/
SRC_DIR			= 		./srcs/

# COLORS - COM_COLOR=blue, OBJ_COLOR=green, ERROR_COLOR=red, WARN_COLOR=yellow
COM_COLOR   	= 		\033[0;34m
OBJ_COLOR    	= 		\033[0;32m
ERROR_COLOR 	= 		\033[0;31m
WARN_COLOR  	= 		\033[0;33m

SRC				=		main.c				get_next_line.c

OBJ				=		$(patsubst %.c,$(OBJ_DIR)%.o,$(SRC))
INCLUDES		=		./header/get_next_line.h
LIBFT_OBJ		=		../libft/obj/*.o

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) $(INCLUDES) LIBFT_OBJECTS
	@ $(CC) $(CFLAGS) $(CFLAGS-1) $(OBJ) $(LIBFT_OBJ) -o $@
	@echo "$(COM_COLOR)...creating: $(NAME)"

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)
	@echo "$(OBJ_COLOR)...compiling $(NAME)-object-files..."

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) $(CFLAGS) $(CFLAGS-1) -c $< -o $@


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