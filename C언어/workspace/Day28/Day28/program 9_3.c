#include<stdio.h>
struct movie {
	char name[30];
	char actor[30];
};

void main() {
	struct movie kMovie = { "신과함께","하정우" };
	printf("영화제목:%s\n", kMovie.name);
	printf("영화배우:%s\n", kMovie.actor);



}