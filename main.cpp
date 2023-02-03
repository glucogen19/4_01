#include <iostream>
class Pen Pen{
	public:
		std::string color;
};
int main(){
	using namespace std;
	cout << "Test v.4.011: OK.\n";
	Pen pen;
	pen.color = "#FFFFFF";
	cout << "Color of pen: " << pen << endl;
	return 0;
}