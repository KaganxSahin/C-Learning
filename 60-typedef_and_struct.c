#include <stdio.h>
#include<string.h>

typedef struct {
    char title[50];
    char author[50];
    int publicationYear;
} Book;

int main() {
    
    Book book1;

    strcpy(book1.title, "A Brief History of Time");
    strcpy(book1.author, "Stephen Hawking");
    book1.publicationYear = 1988;

    printf("Book Title: %s\n", book1.title);
    printf("Book Author: %s\n", book1.author);
    printf("Publication Year: %d\n", book1.publicationYear);

    Book book2;

    strcpy(book2.title, "The Grand Design");
    strcpy(book2.author, "Stephen Hawking");
    book2.publicationYear = 2010;

    printf("\nBook Title: %s\n", book2.title);
    printf("Book Author: %s\n", book2.author);
    printf("Publication Year: %d\n", book2.publicationYear);
    
    return 0;
} 
