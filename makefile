
LIBS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
SOURCES = main.cpp particle.cpp
OBJECTS = main.o particle.o
OUTPUT = Heyo-app


all: $(SOURCES)
	@echo Building $(OUTPUT)
	g++ -c $(SOURCES)
	g++ $(OBJECTS) -o $(OUTPUT) $(LIBS)

clean:
	@echo Deleting output and object files
	rm -f *.o $(OUTPUT) || true

run:
	./$(OUTPUT)
