#include "condition/et.hpp"

namespace condition {

Et::Et(Condition *c1, Condition *c2) : _c1(c1), _c2(c2) {

}

Et::Et(const Et &other) : Et(other._c1, other._c2) {

}

string Et::toString() const {
	return _c1->toString() + " ET " + _c2->toString();
}

bool Et::verif(const Figure *f) const {
	return (_c1->verif(f)) && (_c2->verif(f));
}

Et &Et::operator=(const Et &other) {
	if (&other != this) {
		_c1 = other._c1;
		_c2 = other._c2;
	}
	return *this;
}

}
