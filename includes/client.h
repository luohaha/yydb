#ifndef CLIENT_H
#define CLIENT_H

#include "yydb.h"

/* yydb's client struct */
struct __client {
  uint32_t fd;
  char *name;
  
}

#endif
