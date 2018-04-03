#include "moduleCommon.h"

static int a;

int get_common()
{
   return a;
}

void set_common(int val)
{
   a = val;
}
