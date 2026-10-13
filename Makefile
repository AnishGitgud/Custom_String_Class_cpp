CC=c++
target=main.o ops.o friends.o

exe:$(target)
	@$(CC) $(target) -o exe
	@echo "executable exe created"

main.o:main.cpp
	@$(CC) -c main.cpp
	@echo "main.o created"

ops.o:ops.cpp
	@$(CC) -c ops.cpp
	@echo "ops.o created"

friends.o:friends.cpp
	@$(CC) -c friends.cpp
	@echo "friends.o created"

clean:
	@echo "removing object files"
	@rm -rv *.o
