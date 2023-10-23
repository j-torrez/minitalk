# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtorrez- <jtorrez-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 13:44:52 by arommers          #+#    #+#              #
#    Updated: 2023/10/09 19:41:48 by jtorrez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROJECT = minitalk
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NAME = minitalk
LIBFT = ./Libft/libft.a
INCLUDE = -I./include
SRC = SRC/main.c
OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/, $(notdir $(SRC:.c=.o)))

BOLD    := \033[1m./SRC/
RED     := \033[31;1m
GREEN   := \033[32;1m
YELLOW  := \033[33;1m
BLUE    := \033[34;1m
MAGENTA := \033[35;1m
CYAN    := \033[36;1m
WHITE   := \033[37;1m
RESET	= \x1b[0m

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)	
	@echo "Compiled with $(BLUE)$(CFLAGS)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)
	@echo "$(GREEN)-------------------------------------------"
	@echo "	$(NAME) = NOW READY FOR USE :D"
	@echo "-------------------------------------------"

$(LIBFT):
	@$(MAKE) -C ./Libft

$(OBJ_DIR)/%.o: ./SRC/%.c
	@mkdir -p $(OBJ_DIR)
	@echo "Compiled ✅ $(CYAN) $^"
	@$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $^

clean:
	@$(MAKE) clean -C ./Libft
	@rm -rf $(OBJ_DIR)

fclean: clean
	@$(MAKE) fclean -C ./Libft
	@rm -f $(NAME)
	@echo "$(GREEN) $(PROJECT) Cleaned ✅"

re: fclean all

.PHONY: all clean fclean re