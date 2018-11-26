#!bin/bash

NO_COLOR=[0m
OK_COLOR=[92m
ERROR_COLOR=[31;01m
WARN_COLOR=[33;01m

OK_STRING= $(OK_COLOR)[OK]$(NO_COLOR)
ERROR_STRING=$(ERROR_COLOR)[ERRORS]$(NO_COLOR)
WARN_STRING=$(WARN_COLOR)[WARNING]$(NO_COLOR)

# Linux (default)
EXE = GBE
	LDFLAGS = -lX11 -lXxf86vm -lXrandr -lpthread -lXi -std=c++11 -ldl
	CXXFLAGS= -g -std=c++14 -Wall -pedantic 
# Windows (cygwin)
ifeq "$(OS)" "Windows_NT"
EXE = bin/GBE.exe
	LDFLAGS = -lmingw32 -lSDL2main -lSDL2
	CXXFLAGS= -g --std=c++14 -Wall -pedantic
	#Specify the location of SDL2 in the following field
	LIB_SDL2 = ./deps/SDL2/lib
	INC_SDL2 = ./deps/SDL2/include
	INC_GL = ./deps/glad
	INC = ./include
	CXXFLAGS += -s -DNDEBUG
endif

# OS X
ifeq "$(OSTYPE)" "darwin"
	LDFLAGS = -framework Carbon -framework OpenGL -framework GLUT
	CXXFLAGS= -g -std=c++14 -Wall -pedantic
endif

OBJ_DIR = ./obj

# find cpp files in subdirectories
#SOURCES := $(shell find . -name '*.cpp') 
SOURCES :=  ./gameboy.cpp ./src/cartridge.cpp ./src/cpu.cpp ./src/display.cpp ./src/IO.cpp ./src/memory.cpp ./src/opcodes.cpp ./src/sound.cpp ./src/system.cpp ./src/timer.cpp

OBJECTS := $(SOURCES:.cpp=.o)
OBJECTS := $(subst ./,obj/, $(OBJECTS))

# find headers
HEADERS := $(shell find . -name '*.h')

all: objects $(EXE) remove

objects: $(OBJ_DIR)/gameboy.o $(OBJ_DIR)/src/cartridge.o $(OBJ_DIR)/src/cpu.o $(OBJ_DIR)/src/display.o $(OBJ_DIR)/src/IO.o $(OBJ_DIR)/src/memory.o $(OBJ_DIR)/src/opcodes.o $(OBJ_DIR)/src/sound.o $(OBJ_DIR)/src/system.o $(OBJ_DIR)/src/timer.o

$(OBJ_DIR)/gameboy.o:
	@echo -n Building GBE main file... 
	-@mkdir -p ./obj/src
	@$(CXX) $(CXXFLAGS) -I$(INC) -I$(INC_GL) -L$(LIB_SDL2) -I$(INC_SDL2) --std=c++14 -c ./gameboy.cpp -o $@ 2> temp.log || touch temp.errors 
	@if [ $(test -e temp.errors) ] ; then echo "$(ERROR_STRING)" && cat temp.log ; elif test -s temp.log ; then echo "$(WARN_STRING)" && cat temp.log ; else echo "$(OK_STRING)" ; fi

$(OBJ_DIR)/src/cartridge.o:
	@echo -n Building cartridge class... 
	-@mkdir -p ./obj/src
	@$(CXX) $(CXXFLAGS) -I$(INC) -I$(INC_GL) -L$(LIB_SDL2) -I$(INC_SDL2) --std=c++14 -c ./src/cartridge.cpp -o $@ 2> temp.log || touch temp.errors 
	@if [ $(test -e temp.errors) ] ; then echo "$(ERROR_STRING)" && cat temp.log ; elif test -s temp.log ; then echo "$(WARN_STRING)" && cat temp.log ; else echo "$(OK_STRING)" ; fi

$(OBJ_DIR)/src/cpu.o:
	@echo -n Building CPU class... 
	-@mkdir -p ./obj/src
	@$(CXX) $(CXXFLAGS) -I$(INC) -I$(INC_GL) -L$(LIB_SDL2) -I$(INC_SDL2) --std=c++14 -c ./src/cpu.cpp -o $@ 2> temp.log || touch temp.errors 
	@if [ $(test -e temp.errors) ] ; then echo "$(ERROR_STRING)" && cat temp.log ; elif test -s temp.log ; then echo "$(WARN_STRING)" && cat temp.log ; else echo "$(OK_STRING)" ; fi

$(OBJ_DIR)/src/display.o:
	@echo -n Building display class... 
	-@mkdir -p ./obj/src
	@$(CXX) $(CXXFLAGS) -I$(INC) -I$(INC_GL) -L$(LIB_SDL2) -I$(INC_SDL2) --std=c++14 -c ./src/display.cpp -o $@ 2> temp.log || touch temp.errors 
	@if [ $(test -e temp.errors) ] ; then echo "$(ERROR_STRING)" && cat temp.log ; elif test -s temp.log ; then echo "$(WARN_STRING)" && cat temp.log ; else echo "$(OK_STRING)" ; fi

$(OBJ_DIR)/src/IO.o:
	@echo -n Building IO class... 
	-@mkdir -p ./obj/src
	@$(CXX) $(CXXFLAGS) -I$(INC) -I$(INC_GL) -L$(LIB_SDL2) -I$(INC_SDL2) --std=c++14 -c ./src/IO.cpp -o $@ 2> temp.log || touch temp.errors 
	@if [ $(test -e temp.errors) ] ; then echo "$(ERROR_STRING)" && cat temp.log ; elif test -s temp.log ; then echo "$(WARN_STRING)" && cat temp.log ; else echo "$(OK_STRING)" ; fi

$(OBJ_DIR)/src/memory.o:
	@echo -n Building memory class... 
	-@mkdir -p ./obj/src
	@$(CXX) $(CXXFLAGS) -I$(INC) -I$(INC_GL) -L$(LIB_SDL2) -I$(INC_SDL2) --std=c++14 -c ./src/memory.cpp -o $@ 2> temp.log || touch temp.errors 
	@if [ $(test -e temp.errors) ] ; then echo "$(ERROR_STRING)" && cat temp.log ; elif test -s temp.log ; then echo "$(WARN_STRING)" && cat temp.log ; else echo "$(OK_STRING)" ; fi

$(OBJ_DIR)/src/opcodes.o:
	@echo -n Building opcodes class... 
	-@mkdir -p ./obj/src
	@$(CXX) $(CXXFLAGS) -I$(INC) -I$(INC_GL) -L$(LIB_SDL2) -I$(INC_SDL2) --std=c++14 -c ./src/opcodes.cpp -o $@ 2> temp.log || touch temp.errors 
	@if [ $(test -e temp.errors) ] ; then echo "$(ERROR_STRING)" && cat temp.log ; elif test -s temp.log ; then echo "$(WARN_STRING)" && cat temp.log ; else echo "$(OK_STRING)" ; fi

$(OBJ_DIR)/src/sound.o:
	@echo -n Building sound class... 
	-@mkdir -p ./obj/src
	@$(CXX) $(CXXFLAGS) -I$(INC) -I$(INC_GL) -L$(LIB_SDL2) -I$(INC_SDL2) --std=c++14 -c ./src/sound.cpp -o $@ 2> temp.log || touch temp.errors 
	@if [ $(test -e temp.errors) ] ; then echo "$(ERROR_STRING)" && cat temp.log ; elif test -s temp.log ; then echo "$(WARN_STRING)" && cat temp.log ; else echo "$(OK_STRING)" ; fi

$(OBJ_DIR)/src/system.o:
	@echo -n Building system class... 
	-@mkdir -p ./obj/src
	@$(CXX) $(CXXFLAGS) -I$(INC) -I$(INC_GL) -L$(LIB_SDL2) -I$(INC_SDL2) --std=c++14 -c ./src/system.cpp -o $@ 2> temp.log || touch temp.errors 
	@if [ $(test -e temp.errors) ] ; then echo "$(ERROR_STRING)" && cat temp.log ; elif test -s temp.log ; then echo "$(WARN_STRING)" && cat temp.log ; else echo "$(OK_STRING)" ; fi

$(OBJ_DIR)/src/timer.o:
	@echo -n Building timer class... 
	-@mkdir -p ./obj/src
	@$(CXX) $(CXXFLAGS) -I$(INC) -I$(INC_GL) -L$(LIB_SDL2) -I$(INC_SDL2) --std=c++14 -c ./src/timer.cpp -o $@ 2> temp.log || touch temp.errors 
	@if [ $(test -e temp.errors) ] ; then echo "$(ERROR_STRING)" && cat temp.log ; elif test -s temp.log ; then echo "$(WARN_STRING)" && cat temp.log ; else echo "$(OK_STRING)" ; fi


$(EXE) : 
	@echo -n Building executable file... 
	-@mkdir -p ./bin 
	@$(CXX) -L$(LIB_SDL2) -I$(INC) -I$(INC_SDL2) -I$(INC_GL) -o $@ ./deps/glad/GL/glad.c $(OBJECTS) $(CXXFLAGS) $(LDFLAGS) 2> temp.log || touch temp.errors 
	@if [ $(test -e temp.errors) ] ; then echo "$(ERROR_STRING)" && cat temp.log ; elif test -s temp.log ; then echo "$(WARN_STRING)" && cat temp.log ; else echo "$(OK_STRING)" ; fi

remove:
	@rm -f temp.log temp.errors