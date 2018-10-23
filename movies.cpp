#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

Movies::Movies(char newTitle[10]*, int newYear*, char newDirector[10]*,
	       char newDuration[8]*, float* newRating){
  director = newDirector;
  duration = newDiration;
  rating = newRating;
  Title = newTitle;
  year = newYear;
}
char[]* Movies::getDirector(){
  return director;
}
char[]* Movies::getDuration(){
  return duration;
}
float* Movies::getRating(){
  return rating;
}
int* Movies::getYear(){
  return year;
}
char[]* Movies::getTitle(){
  return Title;
}
