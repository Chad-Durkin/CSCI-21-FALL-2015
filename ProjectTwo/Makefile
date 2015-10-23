FLAGS = -Wall -Wextra -pedantic

project-2: project-2.o box.o prize.o
	g++ -o project-2 $(FLAGS) project-2.o box.o prize.o
	
project-2.o: project-2.cpp
	g++ $(FLAGS) -c project-2.cpp

box.o: box.h box.cpp
	g++ $(FLAGS) -c box.cpp

prize.o: prize.h prize.cpp
	g++ $(FLAGS) -c prize.cpp
	
clean:
	rm -f *.o

cleanall: clean
	rm -f project-2