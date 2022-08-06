assig3: main.c studentlist.c
	gcc -o assig3 main.c studentlist.c -Wall -g -I.

run:
	./assig3 students.txt

mem:
	valgrind --leak-check=yes ./assig3 students.txt

clean:
	rm assig3
