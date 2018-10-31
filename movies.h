#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class Movies : public Media {
 public:
  Movies(char*, int, char*, char*, float);
  char* getDirector();
  char* getDuration();
  float getRating();
  int getYear();
  char* getTitle();
 private:
  char* director;
  char* duration;
  float rating;
};
