#include "mutantstack.hpp"

int		main(){
	// srand(time(0));
	MutantStack<int>			mStackArr;

	// for (int i = 0; i < 10; i++)
		// mstack.push((rand() % 100));

	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~__CREATE_ARRAY__~~~~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;

	for (int i = 0; i < 15; ++i) {
		mStackArr.push(-15 + i * 17);
	}

	MutantStack<int>::iterator begin = mStackArr.begin(); 
	MutantStack<int>::iterator end = mStackArr.end();

	std::cout << "Size of array: ~" << mStackArr.size() << "~" << std::endl << std::endl;

	std::cout << "Inside array: \n" << std::endl;
	int count = 0;
	while (begin != end) {
 	   std::cout << count + 1 << ") __" << *begin << "__" << std::endl;
		++count;
		++begin; 
	}

	mStackArr.pop();
	mStackArr.pop();
	MutantStack<int>::iterator begin1 = mStackArr.begin();
	MutantStack<int>::iterator end1 = mStackArr.end();



	std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "~~~~~~__ARRAY_AFTER_DELETE__~~~~~~" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << std::endl;


	std::cout << "Inside array: \n" << std::endl;

	count = 0;
	std::cout << "Size of array: ~" << mStackArr.size() << "~" << std::endl << std::endl;
	while (begin1 != end1) {
 		std::cout << count + 1 << ") __" << *begin1 << "__" << std::endl;
		++count;
		++begin1; 
	}

	std::cout << "\n" << std::endl;
	
	return (0);
}