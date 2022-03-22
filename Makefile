# COMMANDS
CC =						gcc
RM = 						rm -rf

# EXECUTABLE
NAME = 						push_swap	
PUSH_SWAP =					push_swap

# FLAGS
CFLAGS = 					-Wall -Wextra -Werror
LFLAGS =					-lftprintf -L ./ft_printf/ 
LFLAGS +=					-lft -L ./libft/

ifeq ($(DEBUG), 1)				
							CFLAGS += -g3 -fsanitize=address
							LFLAGS += -fsanitize=address
endif

# DIRECTORY
LIBFT_DIR =					./libft/
PRINTF_DIR =				./ft_printf/

# LIBRARY
FT_PRINTF =					libftprintf.a
LIBFT =						libft.a

# SOURCES
SRC =						./src/main.c\
							./src/ft_check_stack.c\

# OBJECTS
OBJ =						$(SRC:.c=.o)

# RULES
all:						$(NAME)

${NAME}:					$(PUSH_SWAP)

$(PRINTF_DIR)$(FT_PRINTF):	
							make $(FT_PRINTF) -C $(PRINTF_DIR)

$(LIBFT_DIR)$(LIBFT):	
							make $(LIBFT) -C $(LIBFT_DIR)

%.o:						%.c
							$(CC) $(CFLAGS) -c $< -o $@

$(PUSH_SWAP):				$(OBJ) $(PRINTF_DIR)$(FT_PRINTF) $(LIBFT_DIR)$(LIBFT)
							$(CC) $(LFLAGS) $(OBJ) -o $@

clean:						
							$(RM) $(OBJ) $(PUSH_SWAP)

fclean:						clean
							make fclean -C $(LIBFT_DIR)
							make fclean -C $(PRINTF_DIR)

re:							clean all

fre:						fclean all 

.PHONY:						all clean fclean re fre
