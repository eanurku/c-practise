clean:
	-del -f *.exe
	
all: helloworld test

helloworld: hello.c
	gcc -o helloworld hello.c
	
test: test.c
	gcc -o test test.c
