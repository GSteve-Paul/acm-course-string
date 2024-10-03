CFLAGS := -g -O0
CFLAGS += -DCODENB=$(CODENB)

.PHONY: clean
run1: clean demo1
	./demo1

run2: clean demo2
	./demo2

demo1: demo1.o
	$(CC) $(CFLAGS) -o demo1 demo1.o

demo1.o: char-array.c
	$(CC) $(CFLAGS) -o demo1.o -c char-array.c

demo2: demo2.o  
	$(CXX) $(CFLAGS) -o demo2 demo2.o

demo2.o: cppstring.cpp
	$(CXX) $(CFLAGS) -o demo2.o -c cppstring.cpp

clean:
	rm -f demo1 demo2 *.o
