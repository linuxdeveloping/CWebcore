


build:
	@echo "Going to compile stuff"
	./scripts/create_dirs.sh
	gcc ./src/webcore.c ./src/main.c -o ./sandbox/main -ldl
	gcc -c -fPIC -o ./sandbox/modules/test.o ./src/module.c
	gcc -shared -o ./sandbox/modules/test.mod ./sandbox/modules/test.o
	@rm ./sandbox/modules/test.o
	@echo "Done!"
clean:	
	@echo "Going to remove the program"
	@rm ./sandbox -Rf
	@mkdir ./sandbox
