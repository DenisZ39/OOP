#pragma once
#include "NumberList.h"

int main() {
	int x;
	NumberList nr;
	nr.Init();
	/*nr.Add(1);
	nr.Add(5);
	nr.Add(40);
	nr.Add(0);
	nr.Add(114);
	nr.Add(7);
	nr.Add(11);
	nr.Add(17);
	nr.Add(47);
	nr.Add(51);
	nr.Add(25);
	nr.Add(98);*/
	while (cin >> x) {
		nr.Add(x);
	}
	nr.Sort();
	nr.Print();
	return 0;
}