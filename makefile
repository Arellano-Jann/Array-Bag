ArrayBagExecutable: test.o 
	g++ test.o -o ArrayBagExecutable

test.o: test.cpp ArrayBag.h
	g++ -c test.cpp

clean:
	rm *.o ArrayBagExecutable