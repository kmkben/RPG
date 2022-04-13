SOURCES  =  main.cpp character.cpp weapon.cpp
OBJECTS  =  $(SOURCES:.cpp=.o)
TARGET   =  rpg
#LIBS     =  $(shell sdl-config --libs) -lGL -lGLU -lglut -lm

all: $(OBJECTS)
	g++ -o $(TARGET) $(OBJECTS) #$LIBS


%o: %cpp
	g++ -o $@ -c $<


x: all
	./$(TARGET)


clean: 
	rm -rf $(OBJECTS)
	rm -rf *.o


superclean: clean
	rm -rf $(TARGET)

