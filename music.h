#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class Music {
 public:
  Music(char[]*, char[]*, int*, char*, char*);
  char[]* getArtist();
  char[]* getDuration();
  char[]* getPublisher();
  int* getYear();
  char[]* getTitle();
 private:
  char[]* artist;
  char[]* duration;
  char[]* publisher
}
