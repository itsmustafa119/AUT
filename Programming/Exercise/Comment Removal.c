/*Write a program to remove all comments from a C program. C comments don't nest. Print the result in the output.

Hint: Use '<' to redirect stdin and read from a file (See Lab's Chapter 1).

Input

// Single-line "comment"
#include <stdio.h> */
/* This is a multi-line comment,
which ends here. */
/*
int main() {
   printf("Hello World!"); // Another 1 line comment
   return 0;
}
Plain text
Output

#include <stdio.h>
int main() {
   printf("Hello World!");
   return 0;
}*/