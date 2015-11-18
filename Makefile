all: test_complex

test_complex: complex.o

run: 
	echo "running complex"
	./test_complex

clean:
	rm -f test_complex test_complex.o
