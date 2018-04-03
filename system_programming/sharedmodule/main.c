#include "moduleA.h"
#include "moduleB.h"
#include <stdio.h>

int main(int argc, char **argv)
{
   set_a(1);
   printf ("after set_a(1), get_a: %d\n", get_a());
   printf ("after set_a(1), get_b: %d\n", get_b());

   set_b(2);
   printf ("after set_b(2), get_a: %d\n", get_a());
   printf ("after set_b(2), get_b: %d\n", get_b());

   return 0;
}
