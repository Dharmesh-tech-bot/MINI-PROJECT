#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int random,guess;
  int no_of_guess=0;
  srand(time(NULL));


  printf("\n\tWelcome to world of number guessing\n");
  random=rand()%100+1;
  printf("Guess a random number between 1 to 100: ");

  do{
    //printf("Guess a random number between 1 to 100: \n");
    scanf("%d",&guess);
    no_of_guess++;

    if (guess<random){
      printf("Guess larger number\n");
    }else if(guess>random){
      printf("Guess smaller number\n");
    }else{
      printf("\nCongratulaton!!! you guessed the right number in %d attempts",no_of_guess);
    }
  }while(guess != random);

  
  printf("\nDeveloped by: Dharmesh Kumar\n");

  return 0;
}