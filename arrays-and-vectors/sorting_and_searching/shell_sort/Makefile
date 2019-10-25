all: main

array_util.o : array_util.cpp
	g++ -c array_util.cpp

shell_sort.o : shell_sort.cpp
	g++ -c shell_sort.cpp

main : array_util.o shell_sort.o main.cpp
	g++ -o main array_util.o shell_sort.o main.cpp

run :  main
	@ echo "Running main"
	@./main
	@ echo "main ended"

debug:
	gdb ./main

clean :
	@rm *.o  main
