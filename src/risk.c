#include <stdlib.h>
#include "risk.h"

RiskGame * RiskGameCreate(void) {
  RiskGame *game = malloc(sizeof(RiskGame));

  return game;
}
