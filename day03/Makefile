CC = gcc
PUTCHAR = /Users/slack/Desktop/Piscine_C/lib/my_putchar.c
FUNC = $(basename $(FILE))

run:
	printf "void my_putchar(char c);\nint $(FUNC)(void);\nint main(void)\n{\n\t$(FUNC)();\n\treturn (0);\n}\n" > main_test.c
	$(CC) $(PUTCHAR) $(FILE) main_test.c -o test && ./test
	@rm -f test main_test.c
