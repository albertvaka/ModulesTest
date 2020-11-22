import computer;
import printer;

int main() {
	Computer* c = new Computer();
	Printer* p = new Printer();
	p->computer = c;
	c->printer = p;
}