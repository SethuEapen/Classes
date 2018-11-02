#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

Media::Media(){

}
//Media::Media(char* newTitle, int newYear){
//  title = newTitle;
//  year = newYear;
//}
int Media::getYear(){
  return year;
}
char* Media::getTitle(){
  return title;
}
