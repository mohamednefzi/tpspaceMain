#pragma once

class Timer {
private:
	long timer;
	long delai;
	void start();

public:
	Timer(long delai);
	bool estPret();
};
