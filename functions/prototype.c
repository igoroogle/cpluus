#include <stdio.h>



/*void func(int a, int b, int c);*/
void old_func();
void func(int, int, int);
void a(int x);
void b(int x);
void c(int x);

int main() {
    func(2, 2, 22);
    old_func();
    printf("-------------\n");
    a(2);
    printf("main\n");
}


void old_func() {
    func(1, 2, 3);
}

void func(int a1, int b1, int c1) {
    printf("%d\n", a1 + b1 + c1);
}

void a(int x) {
    b(x);
    printf("a %d\n", x);
}

void b(int x) {
    c(x);
    printf("b %d\n", x);
}

void c(int x) {
    printf("c %d\n", x);
}

