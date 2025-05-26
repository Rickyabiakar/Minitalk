# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabi-aka <rabi-aka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/22 14:27:53 by rabi-aka          #+#    #+#              #
#    Updated: 2025/05/22 15:20:51 by rabi-aka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED = \033[0;31m
YELLOW = \033[1;33m
WHITE = \033[1;37m
RESET = \033[0m
CHECK = [✔]

SOURCES = server.c client.c
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
INCLUDES = -Ilibft

all: server client

debug: server_debug
	valgrind --leak-check=full --show-leak-kinds=all ./server_debug

server_debug: server.c libft/libft.a
	$(CC) $(CFLAGS) -Ilibft server.c -Llibft -lft -o server_debug
	@echo "$(GREEN)$(CHECK) server_debug built with debug flags.$(RESET)"

bonus: all

server: server.o libft/libft.a
	$(CC) $(CFLAGS) server.o -Llibft -lft -o server
	@echo "$(GREEN)$(CHECK) server built!$(RESET)"

client: client.o libft/libft.a 
	$(CC) $(CFLAGS) client.o -Llibft -lft -o client
	@echo "$(GREEN)$(CHECK) client built!$(RESET)"

%.o: %.c 
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

libft/libft.a:
	make -C libft

clean:
	rm -f $(OBJECTS)
	make -C libft clean
	@echo "$(YELLOW)Cleaned object files.$(RESET)"


fclean: clean
	rm -f server client
	make -C libft fclean
	@echo "$(YELLOW)Removed server, client, and libft.a$(RESET)"
	
re: fclean all
	@echo "$(BLUE)Project rebuilt from scratch.$(RESET)"

.PHONY: all bonus clean fclean  debug server_debug re

