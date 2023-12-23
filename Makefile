make:
	g++ -g -o prime_openMP  prime_openMP.cpp -fopenmp
clean:
	rm prime_openMP
