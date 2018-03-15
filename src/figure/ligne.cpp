#include "figure/ligne.hpp"

namespace figure {

    Ligne Ligne::temoin = Ligne(Point(0, 0), Point(1, 1));

    Ligne::Ligne(const Point &a, const Point &b) : _origine(a), _extremite(b) {

    }

	Point Ligne::getOrigine() const {
		return _origine;
	}
        
	Point Ligne::getExtremite() const {
		return _extremite;
	}

    std::shared_ptr<Figure> Ligne::copy() const {
        return std::make_shared<Ligne>(this->_origine, this->_extremite);
    }

	std::string Ligne::nom() const {
		return "ligne";
	}
	
	void Ligne::tranformation(const Matrice2D & matrice) {
		//TODO
	}

    void Ligne::dessiner(const Dessin &dessin) const {
        dessin.dessineLigne(_origine.getX(), _origine.getY(), _extremite.getX(), _extremite.getY());
    }

    double Ligne::surface() const {
        double xx = _origine.getX() - _extremite.getX();
        double yy = _origine.getY() - _extremite.getY();
        double distance = sqrt(pow(xx, 2) + pow(yy, 2));
        return distance;
    }

    double Ligne::perimetre() const {
        double xx = _origine.getX() - _extremite.getX();
        double yy = _origine.getY() - _extremite.getY();
        double distance = sqrt(pow(xx, 2) + pow(yy, 2));
        double epaisseur = 1.0;
        return 2 * distance + 2 * epaisseur;
    }

    void Ligne::afficher(ostream &os) const {
        os << "ligne (" << _origine << ", " << _extremite << ")" << endl;
    }


}
