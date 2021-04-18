CC = gcc
TARGET = shop
DTARGET = shop_debug
OBJECTS = main.c product.o manager.o
all : $(TARGET)
$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^
$(DTARGET): $(OBJECTS)
	$(CC) -DDEBUG -o $@ $^
clean:
	rm *.o shop
