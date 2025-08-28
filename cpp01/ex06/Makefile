NAME = harlFilter
SRC = main.cpp Harl.cpp
OBJS = $(SRC:.cpp=.o)

CXX = c++ 
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g

RESET	= \033[0m
RED		= \033[1;31m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m
BLUE	= \033[1;34m

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(BLUE):hammer: Linking $(NAME)...$(RESET)\n"
	@$(CXX) $(CXXFLAGS) -o $@ $^
	@printf "$(GREEN):white_check_mark: Build complete: $(NAME)$(RESET)\n"

%.o: %.cpp
	@printf "$(YELLOW):package: Compiling $<...$(RESET)\n"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@printf "$(RED):broom: Cleaning object files...$(RESET)\n"
	@rm -f $(OBJS)
	@printf "$(GREEN)✔ Object files cleaned$(RESET)\n"

fclean: clean
	@printf "$(RED):fire: Removing executable...$(RESET)\n"
	@rm -f $(NAME)
	@printf "$(GREEN)✔ Full clean done$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re