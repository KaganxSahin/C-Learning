#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

struct card{
  const char *face;
  const char *suit;
    };
typedef struct card Card;

void fillDeck(Card *wDeck,const char *wFace[],const char *wSuit[]);
void shuffle( Card * const wDeck);
void displayDeck(Card *wDeck);
int main()
{
    Card deck[CARDS];
    const char *face[]={"Ace","Deuce","Three","Four","Five","Six","Seven","Eigth","Nine","Ten",
    "Jack","Queen","King"};
    const char *suit[]={"Hearts","Clubs","Diamonds","Spades"};
   srand(time(NULL)); //feed the random function*(rand)
  printf("TIME:%ld\n",time(NULL));
    fillDeck(deck,face,suit);
    printf("\nBEFORE SHUFFLE");
    displayDeck(deck);
    printf("\n----------------");
    shuffle(deck);
     printf("\nAFTEF SHUFFLE");
    displayDeck(deck);
    printf("\n----------------");
    
    return 0;
}


void displayDeck(Card *wDeck){
    int i;
    for(i=0;i<CARDS;i++){
        printf("%d %s of %s \n",i+1,wDeck[i].face,wDeck[i].suit);
    }
    
}


void fillDeck(Card *wDeck,const char *wFace[],const char *wSuit[]){
    
  int i;
    int k;
    int c=0;

for(i=0;i<4;i++){// This is for suits
    for(k=0;k<13;k++){//this is for faces
         wDeck[c].face=wFace[k];
        wDeck[c].suit=wSuit[i];
        c++;
    }
}
        /*
    for(i=0;i<CARDS;i++){
        wDeck[i].face=wFace[i%FACES];
        wDeck[i].suit=wSuit[i/FACES];
        
    }*/
    
}
void shuffle( Card * const wDeck){
    int i;
    int k;//it will be random;
    Card temp;
    for(i=0;i<CARDS;i++){
        k=rand()%CARDS;
        temp=wDeck[i];
        wDeck[i]=wDeck[k];
        wDeck[k]=temp;    }
    
}