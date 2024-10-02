ITOG=main
OBJ=main.o
ISH=main.cpp
FLAGS= -Wall -g

$(ITOG): $(OBJ)						#создание исполнительного файла
	g++ $(FLAGS) $(OBJ) -o $(ITOG) #правила его создания
	
$(OBJ): $(ISH) 						#создание обьектного файла
	g++ $(FLAGS) -c $(ISH) -o $(OBJ)	#правила его создания 
	
clean:
	rm -f *.o $(ITOG)
