app: arg.o arg.i arg.s
	cc arg.o -o app
arg.o: arg.s
	cc -c arg.s -o arg.o
arg.s: arg.i
	cc -S arg.i -o arg.s
arg.i: arg.c
	cc -E arg.c -o arg.i

clean:
	rm -rf *.o
	rm -rf *.s
	rm -rf *.i
	rm -rf app
