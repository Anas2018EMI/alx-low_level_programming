// add.c
int add(int a, int b) {
    return a + b;
}

// sub.c
int sub(int a, int b) {
    return a - b;
}

// mul.c
int mul(int a, int b) {
    return a * b;
}

// div.c
int div(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a / b;
}

// mod.c
int mod(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a % b;
}
