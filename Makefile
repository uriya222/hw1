OBJECT_LIB=power.o basicMath.o
OBJECT_MAIN=main.o
CC=gcc
CFLAGS=-Wall -g
AR=ar

all: myMaths myMathd maind mains
mains: $(OBJECT_MAIN) myMaths
	$(CC) $(CFLAGS) -o mains $(OBJECT_MAIN) libmyMath.a
maind: $(OBJECT_MAIN) 
	$(CC) $(CFLAGS) -o maind $(OBJECT_MAIN) ./libmyMath.so
myMaths: $(OBJECT_LIB)
	$(AR) -rcs libmyMath.a $(OBJECT_LIB)
myMathd: $(OBJECT_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECT_LIB)
power.o: power.c myMath.h
	$(CC) $(CFLAGS) -c power.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(CFLAGS) -c basicMath.c
main.o: main.c myMath.h
	$(CC) $(CFLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind