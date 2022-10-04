build-ex-1:
	cd listas/lista-1/ex-1/ ; \
	mkdir bin ; \
	gcc main.c -o bin/main

build-ex-2:
	cd listas/lista-1/ex-2/ ; \
	mkdir bin ; \
	gcc main.c -o bin/main

build-ex-3:
	cd listas/lista-1/ex-3/ ; \
	mkdir bin ; \
	gcc main.c -o bin/main

build-ex-4:
	cd listas/lista-1/ex-4/ ; \
	mkdir bin ; \
	gcc main.c -o bin/main

build-ex-5:
	cd listas/lista-1/ex-5/ ; \
	mkdir bin ; \
	gcc main.c -o bin/main

build-ex-6:
	cd listas/lista-1/ex-6/ ; \
	mkdir bin ; \
	gcc main.c -o bin/main

build-ex-7:
	cd listas/lista-1/ex-7/ ; \
	mkdir bin ; \
	gcc main.c -o bin/main

build-ex-8:
	cd listas/lista-1/ex-8/ ; \
	mkdir bin ; \
	gcc main.c -o bin/main

build-ex-9:
	cd listas/lista-1/ex-9/ ; \
	mkdir bin ; \
	gcc main.c -o bin/main

build-ex-10:
	cd listas/lista-1/ex-10/ ; \
	mkdir bin ; \
	gcc main.c -o bin/main

build-ex-11:
	cd listas/lista-1/ex-11/ ; \
	mkdir bin ; \
	gcc main.c -o bin/main

run-ex-1:
	./listas/lista-1/ex-1/bin/main
	$(info -------------------------------------------)

run-ex-2:
	./listas/lista-1/ex-2/bin/main
	$(info -------------------------------------------)

run-ex-3:
	./listas/lista-1/ex-3/bin/main
	$(info -------------------------------------------)

run-ex-4:
	./listas/lista-1/ex-4/bin/main
	$(info -------------------------------------------)

run-ex-5:
	./listas/lista-1/ex-5/bin/main
	$(info -------------------------------------------)

run-ex-6:
	./listas/lista-1/ex-6/bin/main
	$(info -------------------------------------------)

run-ex-7:
	./listas/lista-1/ex-7/bin/main
	$(info -------------------------------------------)

run-ex-8:
	./listas/lista-1/ex-8/bin/main
	$(info -------------------------------------------)

run-ex-9:
	./listas/lista-1/ex-9/bin/main
	$(info -------------------------------------------)

run-ex-10:
	./listas/lista-1/ex-10/bin/main
	$(info -------------------------------------------)

run-ex-11:
	./listas/lista-1/ex-11/bin/main
	$(info -------------------------------------------)

run-all:
	make run-ex-1
	make run-ex-2
	make run-ex-3
	make run-ex-4
	make run-ex-5
	make run-ex-6
	make run-ex-7
	make run-ex-8
	make run-ex-9
	make run-ex-10
	make run-ex-11
	
build-all:
	make build-ex-1
	make build-ex-2
	make build-ex-3
	make build-ex-4
	make build-ex-5
	make build-ex-6
	make build-ex-7
	make build-ex-8
	make build-ex-9
	make build-ex-10
	make build-ex-11
	
	clear
