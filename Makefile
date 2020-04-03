NAME = libftprintf.a
CFLAGS:= -Wall -Wextra -Werror

SRCS =	color_redactor.c ft_analazer_flags.c ft_atoi.c ft_bzero.c ft_init_procent.c\
 		ft_init_spec.c ft_lltoa_base.c ft_print_d_i.c ft_printf.c\
 		ft_printf_o_u.c ft_putstr.c ft_strchr.c ft_strcmp.c ft_strlen.c\
 		ft_strnew.c ft_strsub.c ft_write.c ft_printf_c.c ft_printf_s.c ft_printf_percent.c\
 		ft_printf_p.c ft_d_i.c ft_o_u.c ft_x_x.c ft_x_x_x.c double_number.c\
 		f_with_zero.c ft_itoa_c.c ft_itoa_frac.c ft_printf_f.c razrad.c\
 		ft_strjoin.c ft_print_f_one.c ft_printf_x_x.c rounding.c flag_null.c\

OBJS = $(SRCS:c=o)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	${CC} ${CFLAGS} -c $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
