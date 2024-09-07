#include<stdio.h>
#include<string.h>
int main(){
    char book[50]="Contact";
    char author[50]="Carl Sagan";
    char bookandauthor[50]="";

    strcat(book,"-");
    printf("%s\n",book);

    strcat(book,author);
    printf("%s\n",book);

    strcat(bookandauthor,book);
    printf("%s",bookandauthor);

    return 0;

}