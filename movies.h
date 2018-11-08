#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class Movies : public Media {
 public:
  Movies();
  char* getDirector();
  char* getDuration();
  float getRating();
  int getType();

  //int getYear();
  //char* getTitle();
  //int year;
  //char* title;
  char* director;
  char* duration;
  float rating;
};
