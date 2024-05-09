# Definición de variables
CXX = g++
CXXFLAGS = -Wall -std=c++11
#LDFLAGS = -lstdc++fs

# Directorios de origen y binarios
SRC_DIR = src
BIN_DIR = bin

# Solo incluir main.cpp
SOURCES = $(SRC_DIR)/main.cpp

# Generar el archivo objeto correspondiente para main.cpp
OBJECT = $(BIN_DIR)/main.o

# Ejecutable
EXECUTABLE = $(BIN_DIR)\textprocessor.exe

# Regla principal (predeterminada)
all: $(EXECUTABLE)

# Regla para generar el ejecutable
$(EXECUTABLE): $(OBJECT)
	$(CXX) $(CXXFLAGS) $(OBJECT) -o $@ $(LDFLAGS)

# Regla para compilar main.cpp a un archivo objeto
$(BIN_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla de limpieza
clean:
	del $(BIN_DIR)\main.o $(EXECUTABLE)
