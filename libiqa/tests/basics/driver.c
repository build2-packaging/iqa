#include <iqa/iqa.h>

#undef NDEBUG
#include <assert.h>

int main ()
{
  const unsigned char ref[4] = {0, 128, 192, 255};
  unsigned char cmp[4] = {0, 128, 192, 255};

  assert (iqa_mse (ref, cmp, 2, 2, 2) == 0.0f);

  cmp[2] -= 13;
  assert (iqa_mse (ref, cmp, 2, 2, 2) == 42.250f);

  return 0;
}
