clean:
	-del -f *.exe
	
all:  test 01_HelloWorld 02_PlayingWithCharacters

test: test.c
	gcc -o test test.c

01_HelloWorld: 01_HelloWorld.c
	gcc -o 01_HelloWorld 01_HelloWorld.c
	
02_PlayingWithCharacters: 02_PlayingWithCharacters.c
	gcc -o 02_PlayingWithCharacters 02_PlayingWithCharacters.c