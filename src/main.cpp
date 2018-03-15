#include <sstream>
#include <figure/cercle.hpp>////
#include <figure/triangle.hpp>////
#include <figure/image.hpp>////
#include <matrice2D.hpp>
#include <condition/condition.hpp>
#include <figure/SDLdessin.hpp>

using namespace std;
using namespace figure;
using namespace transformation;
using namespace dessin;
using namespace condition;


void mainFunction() {
	
    SDLdessin dessin(800, 600);
    dessin.initialise();
    
    Cercle c(Point(50,50), 20);
    Triangle t(Point(10,10), Point(200, 10), Point(50,300));
    
    c.dessiner(dessin);
    t.dessiner(dessin);
    dessin.attendTouche();
    
    Matrice2D transformations = 
		Matrice2D::translation(10,220) * Matrice2D::rotation(-0.8)
	;
    t.tranformation(transformations);
    
    dessin.nettoie();
    c.dessiner(dessin);
    t.dessiner(dessin);
    dessin.attendTouche();
    
}

int WinMain() {
    mainFunction();
    return 0;
}

int main() {
    mainFunction();
    return 0;
}
