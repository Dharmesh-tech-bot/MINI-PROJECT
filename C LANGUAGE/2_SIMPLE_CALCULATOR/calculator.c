#include <stdio.h>
#include <math.h>

void print_menu();
double divide(double, double);
double modulus(int, int);

int main(){
  int choice;
  double first, second, result;

  while (1){
    print_menu();
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 7){
      break;
    }

    if (choice < 1 || choice > 7){
      fprintf(stderr, "Invalid Input");
      continue;
    }

    printf("Enter first number: ");
    scanf("%lf", &first);
    printf("Enter second number: ");
    scanf("%lf", &second);

    switch (choice)
    {
    case 1:
      result = first + second;
      break;
    case 2:
      result = first - second;
      break;
    case 3:
      result = first*second;
      break;
    case 4:
      result = divide(first,second);
      break;
    case 5:
      result = modulus(first,second);
      break;
    case 6:
      result = pow(first,second);
      break;
    }
  }

  if(!isnan(result)){
    printf("Result of the operation: %.2f",result);
  }

  return 0;
}

void print_menu()
{
  printf("\t____________________________________\n");
  printf("\t\tCALCULATOR\n");
  printf("\t------------------------------------\n");
  printf("Choose number to perform following Operation: \n");
  printf("\t1.Add\n\t2.Subtract\n\t3.Multiply\n\t4.Division");
  printf("\n\t5.Modulus\n\t6.Power\n");
  printf("\t7.Exit\n");
  printf("---------------------------------------------\n");
}


double divide(double a,double b){
  if (b==0){
    fprintf(stderr,"Zero Division Error\n");
    return NAN;
  }else{
    return a/b;
  }
}

double modulus(int a,int b){
  if (b==0){
    fprintf(stderr,"Zero modulus error\n");
    return NAN;
  }else{
    return a%b;
  }
}