# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/01 18:14:56 by dbarrene          #+#    #+#              #
#    Updated: 2024/09/05 18:25:48 by dbarrene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = Materiae
SRCDIR = srcs
OBJDIR = obj
INCDIR = includes
CC = c++
CFLAGS = -Wall -Wextra -Werror -pedantic -g
SRCS = $(SRCDIR)/main.cpp\
	   $(SRCDIR)/AMateria.cpp\
	   $(SRCDIR)/Ice.cpp\
	   $(SRCDIR)/Cure.cpp\
	   $(SRCDIR)/Character.cpp\
	   $(SRCDIR)/MateriaSource.cpp\


OBJS =  $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

$(NAME): $(OBJDIR) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -I $(INCDIR)
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
