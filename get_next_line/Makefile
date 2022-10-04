# **************************************************************************** #
#   COLORS                                                                     #
#   COM_COLOR=blue, OBJ_COLOR=green, ERROR_COLOR=red, WARN_COLOR=yellow        #
# **************************************************************************** #
ERROR_COLOR = \033[0;31m
OBJ_COLOR   = \033[0;32m
WARN_COLOR  = \033[0;33m
COM_COLOR   = \033[0;34m

# **************************************************************************** #
#   VARIABLES                                                                  #
# **************************************************************************** #
NAME			:=		gnl

CC				:=		gcc
CFLAGS			:=		-Wall -Werror -Wextra -Iheader
CPPFLAGS		:=		-D BUFFER_SIZE=42
DEPFLAGS		:=		-MMD -MF $(DDIR)$*.d

SDIR			:= 		srcs/
ODIR			:=		obj/
DDIR			:=		$(ODIR)deps/

LIBFT_DIR		:=		../libft/
LDLIBS			:=		$(LIBFT_DIR)libft.a

SRCS			:=		main.c								\
						get_next_line.c
OBJS			:=		$(SRCS:%.c=$(ODIR)%.o)
DEPS			:=		$(SRCS:%.c=$(DDIR)%.d)


# **************************************************************************** #
#   RULES                                                                      #
# **************************************************************************** #

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): LIBFT $(ODIR) $(DDIR) $(DEPS) $(OBJS)
	@ $(CC) $(CFLAGS) $(CPPFLAGS) $(DEPFLAGS) $(OBJS) -o $@ $(LDLIBS)
	@echo "$(COM_COLOR)...creating: $(NAME)"

$(ODIR):
	@mkdir $@
	@echo "$(OBJ_COLOR)...compiling $(NAME)-object-files..."

$(DDIR):
	@mkdir -p $@
	@echo "$(OBJ_COLOR)...creating dependencies..."

$(ODIR)%.o: $(SDIR)%.c $(DDIR)%.d
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(DEPFLAGS) -c $< -o $@

LIBFT:
	@make -C $(LIBFT_DIR)

clean:
	@rm -rf $(OBJS) $(ODIR) $(DDIR)
	@make clean -C $(LIBFT_DIR)
	@echo "$(ERROR_COLOR)...$(NAME)-object files deleted"

fclean: clean
	@rm -rf $(NAME) $(LDLIBS)

re: fclean all

$(DEPS):
-include $(DEPS)