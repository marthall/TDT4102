ex4: ex4.o Card.o
	g++ -Wall -o ex4 ex4.o Card.o

ex5: ex5.o Card.o CardDeck.o
	g++ -Wall -o ex5 ex5.o Card.o CardDeck.o

ex4.o: ex4.cpp
	g++ -Wall -c ex4.cpp

ex5.o: ex5.cpp
	g++ -Wall -c ex5.cpp

Card.o: Card.cpp
	g++ -Wall -c Card.cpp

CardDeck.o: CardDeck.cpp
	g++ -Wall -c CardDeck.cpp

clean:
	rm -f ex4 ex4.o Card.o CardDeck.o ex5 a.out ex5.o ex2 ex1 ex3
