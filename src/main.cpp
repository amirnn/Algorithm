//
// Created by amirn on 10/29/2020.
//
#include <iostream>
#include "Algorithm.h"

int main(int argc, char ** argv){
  auto randomArray = algorithm::createRandomArray<int, 20>(0,10);
  for (const auto& item: randomArray){
    std::cout << item << std::endl;
  }
  return EXIT_SUCCESS;
}