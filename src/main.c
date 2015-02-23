#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Include the mruby header */
#include "mruby.h"
#include "mruby/value.h"
#include "mruby/compile.h"
#include "mruby/proc.h"

int main(int argc, char **argv)
{
  mrb_state *mrb;
  mrbc_context *c;
  char code[] = "puts \"Hello World\"";

  mrb = mrb_open();
  c   = mrbc_context_new(mrb);

  mrb_load_string_cxt(mrb, code, c);
  mrbc_context_free(mrb, c);

  mrb_close(mrb);

  return 0;
}

