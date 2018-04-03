#include "moduleA.h"
#include "moduleCommon.h"

void set_a(int val)
{
   set_common(val);
}

int get_a()
{
   return get_common();
}
