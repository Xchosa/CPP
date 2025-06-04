# Compiler
CXX = c++

# Compiler flags
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

# Target executable
TARGET = megaphone

# Source files
SRCS = megaphone.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Link the object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

# do not search for this files
.PHONY: all clean fclean re