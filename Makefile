TARGET = libftprintf.a
CC = gcc
FLAG = -Wall -Wextra -Werror
SRC = ./ft_printf.c ./FLAG/*.c ./SPECIFIER/*.c  ./C/*.c ./S/*.c ./DI/*.c \
		./U/*.c ./X/*.c ./PER/*.c ./P/*.c ./LIB/*.c
HEADER = -I ./HEADER
OUTPUT = *.o

$(TARGET) : $(OUTPUT) 
	ar rcs $(TARGET) $(OUTPUT)

$(OUTPUT) : $(SRC)
	gcc $(FLAG) -c $(SRC) $(HEADER)

all : $(TARGET)

clean : 
	rm -f $(OUTPUT)

fclean : clean
	rm -f $(TARGET)

re : fclean all
