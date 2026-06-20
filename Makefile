CC := gcc
CFLAGS := -O3 -Wall -Wextra -MMD -MP -Iinclude
LDFLAGS :=
Target := bin/mp
SRC_DIR := src
OBJ_DIR := OBJ
BIN_DIR := bin
SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
DEPS := $(OBJS:.o=.d)
.PHONY: all clean run
all: $(Target)

$(Target): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CC) $(OBJS) -o $@ $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

-include $(DEPS)

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

run: all
	./$(Target)
