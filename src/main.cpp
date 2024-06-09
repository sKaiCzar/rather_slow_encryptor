#include <iostream>
#include <memory>
#include <thread>
#include <mutex>
using namespace std;

int main () {
  unsigned int ct;

  ct = thread::hardware_concurrency();
  cout<<ct;
  return 0;
}
