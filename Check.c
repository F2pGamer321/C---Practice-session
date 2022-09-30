//A program to Check whether a  person is eligible to vote or not.
#include <stdio.h>

int main()
{
  int age;
  printf("Enter your age: ");
  scanf("%i" , &age);

  if(age >= 18){
    printf("Eligible to vote.\n");
    }

  else if(age < 1){
    printf("Please enter a valid age.\n");
  }
   //want to make it equal to a string.
  //else if(age == "%c"){ 
    //printf("Please enter a age in number"); 
  //}
    
  else{
  printf("Not eligible to vote\n");
  }

  return 0;
}
