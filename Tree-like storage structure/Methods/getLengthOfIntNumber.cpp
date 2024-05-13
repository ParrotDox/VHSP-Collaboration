int getLenghtOfIntNumber(int number) {
	int current_length = 0;
	if (number < 0) {
		++current_length;
		number = -number;
	}
	while (number != 0) {
		number /= 10;
		++current_length;
	}
	return current_length;
}