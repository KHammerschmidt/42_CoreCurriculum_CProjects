NAME		=	libft.a
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -Iheader
OBJ_DIR		=	./obj/
SRC_DIR		=	./src/

# COLORS - COM_COLOR=blue, OBJ_COLOR=green, ERROR_COLOR=red, WARN_COLOR=yellow
COM_COLOR   = \033[0;34m
OBJ_COLOR    = \033[0;32m
ERROR_COLOR = \033[0;31m
WARN_COLOR  = \033[0;33m

SRC			=	ft_calloc.c		ft_bzero.c		ft_memset.c			\
				ft_memcpy.c		ft_memmove.c	ft_memchr.c			\
				ft_memcmp.c		ft_itoa.c		ft_atoi.c			\
				ft_strmapi.c	ft_striteri.c	ft_toupper.c		\
				ft_tolower.c	ft_isalpha.c	ft_isdigit.c		\
				ft_isalnum.c	ft_isascii.c	ft_isprint.c		\
				ft_strlen.c		ft_strlcpy.c	ft_strlcat.c		\
				ft_strchr.c		ft_strrchr.c	ft_strnstr.c		\
				ft_strncmp.c	ft_strdup.c		ft_substr.c			\
				ft_strjoin.c	ft_strtrim.c	ft_strtrim.c		\
				ft_split.c		ft_putstr_fd.c	ft_putendl_fd.c		\
				ft_putnbr_fd.c	ft_putchar_fd.c

BONUS_SRC	=	ft_lstnew.c				ft_lstadd_back.c	\
				ft_lstadd_front.c		ft_lstclear.c		\
				ft_lstdelone.c			ft_lstiter.c		\
				ft_lstlast.c			ft_lstsize.c

OBJ			= $(patsubst %.c,$(OBJ_DIR)%.o,$(SRC))
BONUS_OBJ	= $(patsubst %.c,$(OBJ_DIR)%.o,$(BONUS_SRC))

$(NAME): $(OBJ_DIR) $(OBJ)
	@ar -crs $(NAME) $(OBJ)
	@echo "$(COM_COLOR)...creating: $(NAME)" 

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)
	@echo "$(OBJ_COLOR)...compiling $(NAME)-object-files"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

bonus: $(OBJ_DIR) $(OBJ) $(BONUS_OBJ)
	@ar -rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	@echo "$(OBJ_COLOR)...compiling $(NAME)-bonus-object-files"
	@echo "$(COM_COLOR)...creating: $(NAME)" 

clean:
	@rm -f $(OBJ) $(BONUS_OBJ)
	@rm -rf $(OBJ_DIR)
	@echo "$(ERROR_COLOR)...$(NAME)-object-files deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(ERROR_COLOR)...$(NAME) deleted"

re: fclean all

.PHONY: all clean fclean re