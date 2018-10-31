#include <iostream>
#include <string.h>
#include "media.h"
#include "movies.h"

using namespace std;

Movies::Movies(char* newTitle, int newYear, char* newDirector,
	       char* newDuration, float newRating){
  director = newDirector;
  duration = newDuration;
  rating = newRating;
}
char* Movies::getDirector(){
  return director;
}
char* Movies::getDuration(){
  return duration;
}
float Movies::getRating(){
  return rating;
}
