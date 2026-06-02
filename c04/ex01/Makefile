NAME = Animal # Binary name
CXX = c++ # Compiler
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 # Compiler flags
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp # Source files
OBJS = $(SRCS:.cpp=.o) # Object files
all: $(NAME) # Default target
$(NAME): $(OBJS) # Link target
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) # Link command
%.o: %.cpp # Compile rule
	$(CXX) $(CXXFLAGS) -c $< -o $@ # Compile command
clean: # Remove objects
	rm -f $(OBJS) # Clean objects
fclean: clean # Full clean
	rm -f $(NAME) # Remove binary
re: fclean all # Rebuild target
