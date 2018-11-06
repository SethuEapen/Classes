#ifndef MEDIA
#define MEDIA
#include <iostream>
#include <string.h>

using namespace std;

class Media
{
 public:
  Media();
  Media(char*, int*);
  virtual int getYear();
  virtual char* getTitle();
  virtual char* getDirector();
  virtual char* getDuration();
  virtual float getRating();
  int year;
  char* title;
  char* director;
  char* duration;
  float rating;
};

#endif

