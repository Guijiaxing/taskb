cc=g++
cflags=-c -Wall
all: count

count:main.o count.o
	$(cc) main.o count.o -o hello

main.o: main.cc
	$(cc) $(cflags) main.cc

count.o: count.cc
	$(cc) $(cflags) count.cc


clean:
	rm -rf *o hello 
doc:
	doxygen Doxyfile
