#include <stdio.h>
typedef struct book
{
  char title[30];
  char author[30];
  long int price;
  int no_of_pgs;
  char date_of_publication[10];
}Book;

int main() 
{
  int i;
  Book book1, book2, book3;

    printf("\nEnter the title of book 1 :");
    scanf("%s", book1.title);

    printf("\nEnter the Author of book 1 :");
    scanf("%s", book1.author);

    printf("\nEnter the price of book 1 :");
    scanf("%ld", &book1.price);

    printf("\nEnter the number of pages of book 1 :");
    scanf("%d", &book1.no_of_pgs);

    printf("\nEnter the date of publication of book 1 :");
    scanf("%s", book1.date_of_publication);

    printf("\nEnter the title of book 2 :");
    scanf("%s", book2.title);

    printf("\nEnter the Author of book 2 :");
    scanf("%s", book2.author);

    printf("\nEnter the price of book 2 :");
    scanf("%ld", &book2.price);

    printf("\nEnter the number of pages of book 2 :");
    scanf("%d", &book2.no_of_pgs);

    printf("\nEnter the date of publication of book 2 :");
    scanf("%s", book2.date_of_publication);

    printf("\nEnter the title of book 3 :");
    scanf("%s", book3.title);

    printf("\nEnter the Author of book 3 :");
    scanf("%s", book3.author);

    printf("\nEnter the price of book 3 :");
    scanf("%ld", &book3.price);

    printf("\nEnter the number of pages of book 3 :");
    scanf("%d", &book3.no_of_pgs);

    printf("\nEnter the date of publication of book 3 :");
    scanf("%s", book3.date_of_publication);

    if(book1. price > book2.price && book1.price > book3.price)
    {
      printf("\nTitle : %s", book1.title);
      printf("\nAuthor : %s", book1.author);
      printf("\nPrice : %ld", book1.price);
      printf("\nNo of pages : %d", book1.no_of_pgs);
      printf("\nDate pf publication : %s", book1.date_of_publication);
    }
    else if(book2.price > book3.price)
    {
      printf("\nTitle : %s", book2.title);
      printf("\nAuthor : %s", book2.author);
      printf("\nPrice : %ld", book2.price);
      printf("\nNo of pages : %d", book2.no_of_pgs);
      printf("\nDate pf publication : %s", book2.date_of_publication);
    }
    else
    {
      printf("\nTitle : %s", book3.title);
      printf("\nAuthor : %s", book3.author);
      printf("\nPrice : %ld", book3.price);
      printf("\nNo of pages : %d", book3.no_of_pgs);
      printf("\nDate pf publication : %s", book3.date_of_publication);
    }

  return 0;
}