NAME		=	libft.a
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
OBJ_DIR		=	./obj
SRC_DIR		=	./src
# HEADER_DIR	=	./inc

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

BONUS_SRC	=	bonus_src/ft_lstnew.c				bonus_src/ft_lstadd_back.c	\
				bonus_src/ft_lstadd_front.c			bonus_src/ft_lstclear.c		\
				bonus_src/ft_lstdelone.c			bonus_src/ft_lstiter.c		\
				bonus_src/ft_lstlast.c				bonus_src/ft_lstsize.c

OBJ			= $(patsubst %.c,$(OBJ_DIR)%.o,$(SRC))
# HEADERS		= $(HEADER_DIR)*.h

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@


# OBJ			=	$(SRC:%.c=$(OBJDIR)/%.o)
# BONUS_OBJ	=	$(BONUS_SRC:%.c=$(OBJDIR)/%.o)

all: $(NAME)

# $(NAME): $(OBJ)
# 	ar -crs $(NAME) $(OBJDIR)/*.o

# %.o: %.c
# 	$(CC) -c $(CFLAGS) -o $@ $^

# $(OBJDIR)/%.o: %.c
# 	@mkdir -p $(OBJDIR)
# 	$(CC) -c $(CFLAGS) $< -o $@

bonus: $(OBJ) $(BONUS_OBJ)
	ar -rcs $(NAME) $(OBJDIR)/*.o

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(BONUS_OBJ)

re: fclean all


.PHONY: all clean fclean re