//
// Created by amirn on 10/29/2020.
//
#pragma once
#include <vector>
#include <array>
#include <random>
#include <functional>

namespace algorithm{

// Create Random array of numbers with type T in a uniform distribution.
template<typename T,size_t count>
std::array<T,count> createRandomArray(long lowerBound, long upperBound){
  std::array<T, count> outputArray;
  std::random_device randDevice;
  std::seed_seq      seed{randDevice(), randDevice(), randDevice(), randDevice(), randDevice(), randDevice(), randDevice(), randDevice()};
  std::mt19937       eng(seed); // a source of random data

  std::uniform_int_distribution<long> dist(lowerBound, upperBound);
  std::generate(outputArray.begin(), outputArray.end(), std::bind(dist, eng));
  return outputArray;
}

// merge sort algorithm
template<typename T, int count>
std::array<T, count> mergeSort(std::array<T, count> inputArray){
  // Divide inputArray into two parts
  // if array count was even
  const size_t size = inputArray.size();
  if(size % 2 == 0 && size > 2){
    std::array<T, static_cast<int>(size / 2)> fHalf;
    std::array<T, static_cast<int>(size / 2)> sHalf;
  }
  else if( size == 2){

  }
}

}