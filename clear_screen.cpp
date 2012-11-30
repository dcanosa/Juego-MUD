#include "clear_screen.h"

// Paste one of the above ClearScreen code snippets here.
// For example, here's the POSIX stuff:
#include <unistd.h>

void ClearScreen()
  {
  if (!cur_term)
    {
    int result;
    setupterm( NULL, STDOUT_FILENO, &result );
    if (result <= 0) return;
    }

  putp( tigetstr( "clear" ) );
  }
