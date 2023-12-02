#include<iostream>

#ifndef extend_h
#define extend_h
class extend {
	public:
//		one_char();
		one_char(char line_A);
//		set_char();
		set_char(char line_B);
//		copy_piece();
		copy_piece(char line_copy, char line_B);
		void output();
	private:
		int length;
		char line_A,line_B,line_copy;
};
extend::one_char(char line_input) {
	line_A = line_input;
}
extend::set_char(char line_input) {
	line_B = line_input;
}
extend::copy_piece() {
	line_copy = line_B;
}
void extend::output() {
	std::cout << "one char is " << line_A << endl;
	std::cout << "set char is " << line_B << endl;
	std::cout << "copy piece is " << copy_line << endl;
}

#endif