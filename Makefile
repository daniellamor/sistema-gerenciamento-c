  GNU nano 8.7                                                Makefile                                                Modified
# Onde estão os header^a
CFLAGS = -Iinclude

# Todos os arquivos .c dentro de src
SRC = $(wildcard src/*.c)

# Nome do executável
EXEC = sistema 
# Regra principal
all: $(EXEC)

# Como gerar o executável
$(EXEC): $(SRC)
        $(CC) $(SRC) $(CFLAGS) -o $(EXEC)

# Limpar arquivos compilados
clean:
# Onde estão os header
CFLAGS = -Iinclude

# Todos os arquivos .c dentro de src
SRC = $(wildcard src/*.c)

# Nome do executável
EXEC = sistema

# Regra principal
all: $(EXEC)

# Como gerar o executável
$(EXEC): $(SRC)
	$(CC) $(SRC) $(CFLAGS) -o $(EXEC)

# Limpar arquivos compilados
clean:
	rm -f src/*.o $(EXEC)
