all:
	gcc -o main main.c hmc5883l.c -lm
clean:
	rm -f  main
