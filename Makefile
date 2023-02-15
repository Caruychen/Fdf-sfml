NAME := fdf

CC := g++
CFLAGS := -std=c++17

SRC := ./src

LIB := ./lib
SFML := $(LIB)/SFML
INCLUDES := -I$(SFML)/include
LINK := -L$(SFML)/build/lib -lsfml-graphics -lsfml-window -lsfml-system
RPATH := -Wl,-rpath,$(SFML)/build/lib
SFML_BUILD := $(SFML)/build

all: $(SFML_BUILD) $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC)/main.cpp -o $(NAME) $(INCLUDES) $(LINK) $(RPATH)

$(SFML_BUILD):
	cmake -S $(SFML) -B $(@)
	$(MAKE) -C $(@) -j 8

clean:
	@rm -f $(NAME)
