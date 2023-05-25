NAME = libftprintf.a

SRC = 	ft_printf.c\
		ft_print_element.c\
		ft_putaddr_hex.c\
		ft_putnbr.c\
		ft_putunbr.c\
		utils.c\

OBJ = $(SRC:.c=.o) 

CC = cc

CCFLAGS = -Wall -Wextra -Werror
	
all : $(NAME)

$(NAME) : $(OBJ) ft_printf.h
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
    $(CC) $(FLAGS) -c $< -o $@


clean :
	rm -f $(OBJ) $(OBJ_BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re

#makefile pour faire compiler libft depuis son propre makefile
#NAME = libftprintf.a

#SRCS = ft_printf.c\
        utils.c\
        ft_print_uitoa.c\
        ft_print_hex.c\
        ft_print_ptr.c\

#OBJS = $(SRCS:.c=.o)

#CC = cc

#FLAGS = -Wall -Wextra -Werror

#LIBFT_DIR = Libft

#$(NAME): $(OBJS) ft_printf.h
#    $(MAKE) -C $(LIBFT_DIR)
#    cp $(LIBFT_DIR)/libft.a .
#    mv libft.a $(NAME)
#    ar -cr $(NAME) $(OBJS)
#    $(MAKE) -C $(LIBFT_DIR) clean

#%.o: %.c
#    $(CC) $(FLAGS) -c $< -o $@

#all: $(NAME)

#clean:
#    rm -f $(OBJS)

#fclean: clean
#    rm -f $(NAME)
#    $(MAKE) -C $(LIBFT_DIR) fclean

#re: fclean all

#.PHONY: all, clean, fclean, re