#include <stdio.h>
#include <string.h>

const int winning_number = 4;
const char correct_password[] = "lott";

/* Lets the user play given number of rounds by the function start game */
/* The range of the number is from 1 to 10 */
/* Assume number of rounds is overwritten to become 11 for example */
/* Then you will just simply enter 1 2 3 4 ... till you get the correct number */
/* BOOM YOU WON */
int play_lottery(int turns) {
  printf("you have %d rounds \n",turns);
  while (turns > 0) {
    int chosen_number;
    printf("enter a number for 1 to 10 ");
    scanf("%d",&chosen_number);
    if (chosen_number == winning_number) {
      printf("you won!!");
      return 0;
    }
    turns = turns -1;
  }
  return 0;
}

/* Lets user enter a password hardcoded consisting of 5 letters maximum */
/* If password is correct then take us to the lottery */
/* To crack this you will have to enter a very big input for the password */
/* The very big input will overwrite correct_pass to make it non_zero */
/* It will also overwrite the number of rounds to make it bigger than 5 */
int start_game() {
  char pass[5];
  int correct_pass = 0;
  int turns = 5;
  printf("fill in your password ");
  scanf("%s",&pass);
  if (!strcmp(pass,correct_password)) {
    correct_pass = 1;
  }

  if (correct_pass) {
    play_lottery(turns);
  }
  return 0;
}

int main(){
  return start_game();
}
