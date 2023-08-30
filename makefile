proFile: recruitEmployee.o printAll.o printOne.o lookOnId.o lookOnFullName.o sortEmployeesId.o countEmployees.o fireOne.o fireAll.o mainA3.o helperA3.o
		gcc -Wall -std=c99 recruitEmployee.o printAll.o printOne.o lookOnId.o lookOnFullName.o sortEmployeesId.o countEmployees.o fireOne.o fireAll.o mainA3.o helperA3.o -o bin/proFile
recruitEmployee.o: src/recruitEmployee.c src/helperA3.c include/headerA3.h
		gcc -Wall -std=c99 -c src/recruitEmployee.c src/helperA3.c
printAll.o: src/printAll.c src/helperA3.c include/headerA3.h
		gcc -Wall -std=c99 -c src/printAll.c src/helperA3.c
printOne.o: src/printOne.c src/helperA3.c include/headerA3.h
		gcc -Wall -std=c99 -c src/printOne.c src/helperA3.c
lookOnId.o: src/lookOnId.c src/helperA3.c include/headerA3.h
		gcc -Wall -std=c99 -c src/lookOnId.c src/helperA3.c
lookOnFullName.o: src/lookOnFullName.c src/helperA3.c include/headerA3.h
		gcc -Wall -std=c99 -c src/lookOnFullName.c src/helperA3.c
countEmployees.o: src/countEmployees.c src/helperA3.c include/headerA3.h
		gcc -Wall -std=c99 -c src/countEmployees.c src/helperA3.c
sortEmployeesId.o: src/sortEmployeesId.c src/helperA3.c include/headerA3.h
		gcc -Wall -std=c99 -c src/sortEmployeesId.c src/helperA3.c
fireOne.o: src/fireOne.c src/helperA3.c include/headerA3.h
		gcc -Wall -std=c99 -c src/fireOne.c src/helperA3.c
fireAll.o: src/fireAll.c src/helperA3.c include/headerA3.h
		gcc -Wall -std=c99 -c src/fireAll.c src/helperA3.c
mainA3.o: src/mainA3.c src/helperA3.c include/headerA3.h
		gcc -Wall -std=c99 -c src/mainA3.c src/helperA3.c
clean:
		rm *.o bin/proFile
