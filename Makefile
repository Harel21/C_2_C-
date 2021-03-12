

make:
	gcc -c src/*.c -Wall
	gcc *.o -o bin/App
	./bin/App
cmp:
	gcc -c src/*.c -Wall
	gcc *.o -o bin/App
clean:
	rm *.o
