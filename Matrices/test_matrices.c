#include <stdio.h>
#include "matrices.h"

int main(void) {

  // Construct a new 3x6 matrix
  MATRIX a = new_matrix(2,2);
  MATRIX b = new_matrix(2,2);
  MATRIX c;

  puts("Initial matrix:");
  print_matrix(&a);
  print_matrix(&b);

  puts("Modified matrix:");
  set(&a, 0, 0, 20.0);
  set(&a, 1, 1, 40.0);
  //set(&a, 0, 4, 60.0);
  //set(&a, 2, 5, 80.0);
  print_matrix(&a);
  set(&b, 0, 0, 20.0);
  set(&b, 1, 1, 40.0);
  print_matrix(&b);

  puts("Element a(2,2):");
  print_value(get(&a, 1, 1));
  puts("");
  puts("Element a(0,4):");
  print_value(get(&a, 0, 1));
  puts("");

    
  puts("Multiply matrix:");
//  MATRIX c = matprod(&a,&b);
  matprod(&a,&b);
  print_matrix(&c);
    
  // Destruct matrix when done
  delete_matrix(a);
  delete_matrix(b);

  return 0;
}
