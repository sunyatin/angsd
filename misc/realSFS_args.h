#include "safreader.h"
#include <vector>
typedef struct {
  char *chooseChr;
  int start;
  int stop;
  int nSites;
  int maxIter;
  double tole;
  int nThreads;
  std::vector<char *> sfsfname;
  std::vector<persaf *> saf;
  int posOnly;
  char *fname;
  int onlyOnce;
  int emAccl;
  char *fstout;
  int win;
  int step;
  int type;
  int oldout;
}args;
args * getArgs(int argc,char **argv);
void destroy_args(args *p);
