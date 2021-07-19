#include <iostream>
#include <string>
#include "stdio.h"
#include "encrypt.h"

int main(int argc, char* argv[]){
  FILE *fp = fopen(argv[1], "r");
  if(fp == NULL){
    std::cout << "Could not read the file!\n" << std::endl;
  }
  std::cout << "Hello worldddd!\n" << std::endl;
  encrypt e;
  return 0;
}
