edit: sort.o quicksort_def.o sort_def.o
	gcc -o demo sort.o quicksort_def.o sort_def.o
sort.o: sort.c
	gcc -c sort.c
quciksorti_def.o: quicksort_def.c quciksort.h
	gcc -c quicksort_def.c
sort_def.o: sort_def.c sort.h
	gcc -c sort_def.c
clean:
	rm demo sort.o quicksort_def.o sort_def.o
