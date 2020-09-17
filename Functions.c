/*
Purpose:      Some implemented functions in C
Date:         15 September 2020

*/

/* Preprocessor directives */

#include "lab1_inlab_exercises.h"
#include <stdlib.h> // For system command

/*

Reverses the order of an array of integers

*/

void reverse_array(int array[], int length) {

	int temp = 0;
	int j = length - 1;

	for (int i = 0; i < length / 2; ++i, --j) {

		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
}

/*

Returns the length of the specified C string (an array of

*/

int length(const char string[]) {

	int count = 0;
	int i = 0;
	while (string[i] != '\0') {
		count++;
		i++;
	}
	return count;
}

/*

Returns the number of occurrences of the specified char in the specified

*/

int count_letters(const char string[], char letter) {
	int i = 0;
	int count = 0;
	while (string[i] != '\0') {
		if (string[i] == letter) {
			count++;
		}
		i++;
	}
	return count;
}



/*

Determines if a string is a palindrome.  Skips spaces.

*/

int is_palindrome(const char string[]) {
	int string_length = length(string);
	char temp_str[999];
	int k = 0;
	for (int i = 0; i < string_length; ++i) {
		if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {
			temp_str[k] = string[i];
			k++;
		}
		else
			continue;
	}
	int i = 0, j = k - 1;
	for (i = 0; i < j; ++i, --j) {
		if (temp_str[i] != temp_str[j]) {
			return 0;
		}
	}
	return 1;
}
