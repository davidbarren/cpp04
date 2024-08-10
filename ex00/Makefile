# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/26 03:46:13 by dbarrene          #+#    #+#              #
#    Updated: 2024/08/10 14:32:35 by dbarrene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals

COMP = c++

COMPFLAGS = -Wall -Wextra -Werror -pedantic #-g -fsanitize=address

SRCDIR = srcs
OBJDIR = obj
SRCS = $(SRCDIR)/main.cpp\
	   $(SRCDIR)/Animal.cpp\
	   $(SRCDIR)/Dog.cpp\
	   $(SRCDIR)/Cat.cpp\
	   $(SRCDIR)/WrongCat.cpp\
	   $(SRCDIR)/WrongAnimal.cpp\

OBJS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@$(COMP) $(COMPFLAGS) -c $< -o $@

$(NAME): $(OBJDIR) $(OBJS)
	@$(COMP) $(COMPFLAGS) $(OBJS) -o $(NAME)
	@echo "Compiling $(NAME)"
	@echo "Compilation finished :)"

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@echo "Removing objects"
	@rm -f $(OBJS)
	@rm -rf $(OBJDIR)
fclean: clean
	@rm -f $(NAME)
	@echo "Removing $(NAME)"
re: fclean all
	
