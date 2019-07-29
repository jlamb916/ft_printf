# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jolam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/20 02:17:46 by jolam             #+#    #+#              #
#    Updated: 2019/02/21 16:26:56 by jolam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_strdup.c\
	  ft_strlen.c\
	  ft_strnew.c\
	  ft_memset.c\
	  ft_atoi.c\
	  ft_uitoa.c\
	  ft_uitoa_base.c\
	  ft_upper_uitoa_base.c\
	  ft_check_conv.c\
	  ft_itoa_base.c\
	  ft_itoa.c\
	  ft_printf.c\
	  ft_to_upper_s.c\
	  ft_strjoin.c\
	  ft_precision.c\
	  ft_field_width.c\
	  ft_modify_len.c\
	  ft_precision.c\
	  ft_ftoa.c\
	  ft_itoa_dec.c\
	  ft_ftoa_ld.c\
	  ft_check_flags.c\
	  ft_initialize.c\
	  ft_flags.c\
	  ft_hash.c\
	  ft_convert_d.c\
	  ft_convert_o.c\
	  ft_convert_u.c\
	  ft_convert_x.c\
	  ft_convert_p.c\
	  ft_convert_f.c\
	  ft_convert_chars.c\
	  ft_count_flags.c\
	  ft_ltoa.c\
	  ft_ultoa_base.c\
	  ft_invalid_fmt.c\
	  ft_itoa_unsigned.c\

OBJ = $(SRC:.c=.o)

SRCDIR = srcs
OBJDIR = objs

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(OBJ))
HEADER = -I includes

CC = gcc
CFLAGS = -c 

NAME = libftprintf.a

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@/bin/mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) $(HEADER) $< -o $@

$(NAME): $(OBJS)
	@ar rcs $@ $^
	@ranlib $@
	@echo "printf_complete"

clean:
	@/bin/rm -rf $(OBJDIR)
	@echo "printf cleaned"
fclean: clean
	@/bin/rm -f $(NAME)
	@echo "printf fcleaned"

re: fclean all
