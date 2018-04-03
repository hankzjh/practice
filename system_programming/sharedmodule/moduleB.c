#include "moduleB.h"
#include "moduleCommon.h"

void set_b(int val)
{
   set_common(val);
}

int get_b()
{
   return get_common();
}
