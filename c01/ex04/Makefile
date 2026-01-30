NAME = replace
TESTER = tester

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TESTER): tester.cpp
	$(CXX) $(CXXFLAGS) tester.cpp -o $(TESTER)

test: $(NAME) $(TESTER)
	./$(TESTER)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f $(TESTER)

re: fclean all
