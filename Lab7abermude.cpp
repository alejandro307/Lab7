//Driver file for Sorting Speeds Lab
//Alejandro Bermudez 
//lab7
#include "SortingSpeed.h"
#include "unixTimer.h"//change this based on your system


int main()
{
	// Quick Sort 4 seconds Time
	Timer time;
	vector<double> tBubble = getNums(21000000, 1.0, 500.0);
	time.start();
	qsort(tBubble.data(), tBubble.size(), sizeof(double), compare);
	time.stop();
	cout << "The time to sort using quick Sort is " << time() << " seconds" << endl;

	// Quick Sort Doubled Time
	Timer time1;
	vector<double> tBubbleD = getNums(42000000, 1.0, 500.0);
	time1.start();
	qsort(tBubbleD.data(), tBubbleD.size(), sizeof(double), compare);
	time1.stop();
	cout << "The time to sort using quick Sort is " << time1() << " seconds" << endl;

	// Quick Sort Quadrupled Time
	Timer time2;
	vector<double> tBubbleQ = getNums(84000000, 1.0, 500.0);
	time2.start();
	qsort(tBubbleQ.data(), tBubbleQ.size(), sizeof(double), compare);
	time2.stop();
	cout << "The time to sort using quick Sort is " << time2() << " seconds" << endl;



	// Bubble Sort 4 seconds
	Timer time3;
	vector<double> tBubble4 = getNums(25000, 1.0, 500.0);
	time3.start();
	BubbleSort(tBubble4);
	time3.stop();
	cout << "The time to sort using Bubble Sort is " << time3() << " seconds" << endl;


	// Bubble Sort Doubled Time
	Timer time4;
	vector<double> tBubbleB = getNums(50000, 1.0, 500.0);
	time4.start();
	BubbleSort(tBubbleB);
	time4.stop();
	cout << "The time to sort using Bubble Sort is " << time4() << " seconds" << endl;

	// Bubble Sort Quadrupled Time
	Timer time5;
	vector<double> tBubbleQ2 = getNums(100000, 1.0, 500.0);
	time5.start();
	BubbleSort(tBubbleQ2);
	time5.stop();
	cout << "The time to sort using Bubble Sort is " << time5() << " seconds" << endl;

	// Insertion Sort 4 seconds
	Timer time6;
	vector<double> tInsertion = getNums(32000, 1.0, 500.0);
	time6.start();
	InsertionSort(tInsertion);
	time6.stop();
	cout << "The time to sort using insertion Sort is " << time6() << " seconds" << endl;




	// Insertion Sort Doubled Time
	Timer time7;
	vector<double> tInsertionD = getNums(64000, 1.0, 500.0);
	time7.start();
	InsertionSort(tInsertionD);
	time7.stop();
	cout << "The time to sort using insertion Sort is " << time7() << " seconds" << endl;


	// Insertion Sort Quadrupled Time
	Timer time8;
	vector<double> tInsertionQ = getNums(128000, 1.0, 500.0);
	time8.start();
	InsertionSort(tInsertionQ);
	time8.stop();
	cout << "The time to sort using insertion Sort is " << time8() << " seconds" << endl;

	// Selection Sort 4 seconds Time
	Timer time9;
	vector<double> tSelection = getNums(48700, 1.0, 500.0);
	time9.start();
	SelectionSort(tSelection, tSelection.size());
	time9.stop();
	cout << "The time to sort using Selection Sort is " << time9() << " seconds" << endl;

	// Selection Sort double Time
	Timer time10;
	vector<double> tSelectionD = getNums(97400, 1.0, 500.0);
	time10.start();
	SelectionSort(tSelectionD, tSelectionD.size());
	time10.stop();
	cout << "The time to sort using Selection Sort is " << time10() << " seconds" << endl;




	// Selection Sort Quadrupled Time
	Timer time11;
	vector<double> tSelectionQ = getNums(194800, 1.0, 500.0);
	time11.start();
	SelectionSort(tSelectionQ, tSelectionQ.size());
	time11.stop();
	cout << "The time to sort using Selection Sort is " << time11() << " seconds" << endl;


	// STL::Sort 4 seconds Time
	Timer time12;
	vector<double> tSTL = getNums(44000000, 1.0, 5000.0);
	time12.start();
	std::sort(tSTL.begin(), tSTL.end());
	time12.stop();
	cout << "The time to sort using STL::Sort is " << time12() << " seconds" << endl;



	// STL::Sort Doubled Time
	Timer time13;
	vector<double> tSTL1 = getNums(88000000, 1.0, 5000.0);
	time13.start();
	std::sort(tSTL1.begin(), tSTL1.end());
	time13.stop();
	cout << "The time to sort using STL::Sort is " << time13() << " seconds" << endl;


	// STL::Sort  Quadrupled Time
	Timer time14;
	vector<double> tSTL2 = getNums(176000000, 1.0, 5000.0);
	time14.start();
	std::sort(tSTL2.begin(), tSTL2.end());
	time14.stop();
	cout << "The time to sort using STL::Sort is " << time14() << " seconds" << endl;



	return 0;
}
