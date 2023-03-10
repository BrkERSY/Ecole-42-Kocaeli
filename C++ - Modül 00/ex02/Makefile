NAME = Account
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) *.cpp -o $(NAME)
	@echo "\033[31mOluşturuldu ✓\033[0m"

re: fclean all

clean:
	@echo cleaned

fclean:
	@rm -rf $(NAME)
	@echo "\033[31mTemizlendi ✓\033[0m"
