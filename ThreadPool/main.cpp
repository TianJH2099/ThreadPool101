#include <iostream>
#include "ThreadPool.h"


int main(int argc, char* argv) {
	ThreadPool pool(4);

	for (int i = 0; i < 10; i++) {
		pool.enqueue([i]() {
			std::cout << "task : " << i << " is running. \n";
			std::this_thread::sleep_for(std::chrono::seconds(1));
			std::cout << "task : " << i << " is done. \n";
			});
	}
	return 0;
}