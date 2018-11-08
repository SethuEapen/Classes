#ifndef MEDIA
#define MEDIA
#include <iostream>
#include <string.h>

using namespace std;

class Media
{
 public:
  Media();
//  Media(char*, int*);
  int getYear();
  char* getTitle();
  virtual int getType() = 0;
  int year;
  char* title;
};

#endif

