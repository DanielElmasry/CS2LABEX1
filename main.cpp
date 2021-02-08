#include <iostream>
#include "program1.h"

using namespace std;

int main()
{
int val[] = { 60, 100, 120 };
int wt[] = { 10, 20, 30};
int W = 50;
int n = sizeof(val) / sizeof(val[0]);
cout << kanpSack(W, wt, val, n);
return 0;
}
