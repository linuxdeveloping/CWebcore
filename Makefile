


build:
	@echo "Going to compile stuff"
	gcc ./src/webcore.c ./src/main.c -o ./sandbox/main
	@echo "Done!"
clean:	
	@echo "Going to remove the program"
	@rm ./sandbox -Rf
	mkdir ./sandbox
	@echo "Not filled yet"	
