run.exercises : makefile exercises
	./exercises

exercises : makefile *.cpp
	g++ -std=c++11 -Wall -Werror -pedantic -O *.cpp -o exercises
	
clean :
	rm -rf exercises* *.cpp~ *.hpp~ makefile~
