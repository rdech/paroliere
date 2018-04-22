exe: paroliere.c
	gcc paroliere.c -o exe
test:
	./exe
rm:
	rm exe
