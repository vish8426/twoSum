# Compiler
CXX = g++

# Compiler Flags
CXXFLAGS = -g -Wall -std=c++17 -I../include

# Target Executable
TARGET = bin/test_twoSum

# Source Files
SRCS = $(wildcard *.cpp)

# Object Files
OBJS = $(patsubst %.cpp, build/%.o, $(SRCS))

# Default Target
all: $(TARGET)

# Rule to Build the Target Executable
$(TARGET): $(OBJS) | bin
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to Compile .cpp Files into .o Files
build/%.o: %.cpp | build
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create bin Directory if it doesn't exist
bin:
	mkdir bin

# Create build Directory if it doesn't exist
build:
	mkdir build

# Clean up Generated Files
clean:
	del /f $(subst /,\,$(OBJS)) $(subst /,\,$(TARGET).exe)

# Phony Targets (not actual files)
.PHONY: all clean