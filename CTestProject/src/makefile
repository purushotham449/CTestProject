all: main

clean:
    rm main.o main

main: main.o
    gcc -g -o main main.o

main.o:
    gcc -c -g main.c