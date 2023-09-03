proFile: recruitEmployee.o printAll.o printOne.o lookOnId.o lookOnFullName.o sortEmployeesId.o countEmployees.o fireOne.o fireAll.o main.o
		gcc -Wall -std=c99 recruitEmployee.o printAll.o printOne.o lookOnId.o lookOnFullName.o sortEmployeesId.o countEmployees.o fireOne.o fireAll.o main.o -o bin/proFile
recruitEmployee.o: src/recruitEmployee.c include/header.h
		gcc -Wall -std=c99 -c src/recruitEmployee.c
printAll.o: src/printAll.c include/header.h
		gcc -Wall -std=c99 -c src/printAll.c
printOne.o: src/printOne.c include/header.h
		gcc -Wall -std=c99 -c src/printOne.c
lookOnId.o: src/lookOnId.c include/header.h
		gcc -Wall -std=c99 -c src/lookOnId.c
lookOnFullName.o: src/lookOnFullName.c include/header.h
		gcc -Wall -std=c99 -c src/lookOnFullName.c
countEmployees.o: src/countEmployees.c include/header.h
		gcc -Wall -std=c99 -c src/countEmployees.c
sortEmployeesId.o: src/sortEmployeesId.c include/header.h
		gcc -Wall -std=c99 -c src/sortEmployeesId.c
fireOne.o: src/fireOne.c include/header.h
		gcc -Wall -std=c99 -c src/fireOne.c
fireAll.o: src/fireAll.c include/header.h
		gcc -Wall -std=c99 -c src/fireAll.c
main.o: src/main.c include/header.h
		gcc -Wall -std=c99 -c src/main.c
clean:
		rm *.o bin/proFile
