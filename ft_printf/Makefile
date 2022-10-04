# **************************************************************************** #
#   COLORS                                                                     #
#   COM_COLOR=blue, OBJ_COLOR=green, ERROR_COLOR=red, WARN_COLOR=yellow        #
# **************************************************************************** #
COM_COLOR   = \033[0;34m
OBJ_COLOR   = \033[0;32m
ERROR_COLOR = \033[0;31m
WARN_COLOR  = \033[0;33m


# **************************************************************************** #
#   VARIABLES                                                                  #
# **************************************************************************** #
NAME		:=	ft_printf
LIB			:=	libftprintf.a

CC			:= 	gcc
CFLAGS		:= 	-Wall -Werror -Wextra -Iheader

ODIR		:= 	./obj/
SDIR		:=	./srcs/
LIBFT_DIR	:= 	../libft/


SRCS 		:= 	main.c												\
				ft_printf.c 	 			ft_conversion.c 		\
				ft_print_char.c 			ft_print_string.c 		\
				ft_print_hexa.c 			ft_print_int.c 			\
				ft_print_unsigned_int.c 	ft_itoa_unsigned.c

OBJS		:=	$(SRCS:%.c=$(ODIR)%.o)


# **************************************************************************** #
#   RULES                                                                      #
# **************************************************************************** #

.PHONY: all clean fclean re

$(NAME): $(LIB)
	@$(CC) $(CFLAGS) -o $@ $(OBJS) $< ../libft/libft.a
	@echo "$(WARN_COLOR)...creating executable $(NAME)"

$(LIB): LIBFT $(ODIR) $(OBJS)
	@ar -rcs $(LIB) $(OBJS)
	@echo "$(COM_COLOR)...creating: $(LIB)"

$(ODIR):
	@mkdir $(ODIR)
	@echo "$(OBJ_COLOR)...compiling $(LIB)-object-files..."

$(ODIR)%.o: $(SDIR)%.c
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

LIBFT:
	@make -C $(LIBFT_DIR)

clean:
	@rm -rf $(LIB) $(OBJS) $(ODIR)
	@make clean -C $(LIBFT_DIR)
	@echo "$(ERROR_COLOR)...$(LIB) & object files deleted"
	@echo "$(ERROR_COLOR)...$(NAME) deleted"

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR)

re: fclean all
