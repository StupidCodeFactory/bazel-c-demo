#include <stdio.h>
#include <gtest/gtest.h>

extern "C" {
  #include "risk.h"
  #include "malloc_mock/black_ops.h"

  extern char **environ;
  #define CLEAR_LV_ENTITLEMENT "com.apple.private.security.clear-library-validation"
}

TEST(RiskGame, RiskGameCreate) {
  RiskGame *game = RiskGameCreate();
  ASSERT_TRUE(game);
}

TEST(RiskGame, createGame) {
  RiskGame *game = (RiskGame *)expectMallocFail((function_stub_t) RiskGameCreate);
  ASSERT_FALSE(game);
}

TEST(RiskGame, RiskGameCreateAgain) {
  RiskGame *game = RiskGameCreate();
  ASSERT_TRUE(game);
}
