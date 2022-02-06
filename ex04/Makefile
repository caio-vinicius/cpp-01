# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csouza-f <caio@42sp.org.br>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/20 23:40:44 by csouza-f          #+#    #+#              #
#    Updated: 2022/02/06 18:23:17 by csouza-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sedisforlosers

SOURCES = ./
SOURCES_FILES = main.cpp
SOURCES_FILES_FULL = $(addprefix $(SOURCES)/,$(SOURCES_FILES))

OBJECTS = ./objects
OBJECTS_FILES = $(patsubst $(SOURCES)/%.cpp,$(OBJECTS)/%.o,$(SOURCES_FILES_FULL))

CCFLAGS = -g -Wall -Wextra -Werror -std=c++98 -pedantic-errors

all: $(NAME)

$(NAME): $(OBJECTS_FILES)
	g++ $^ -o $@

$(OBJECTS)/%.o: $(SOURCES)/%.cpp
	g++ $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all 
