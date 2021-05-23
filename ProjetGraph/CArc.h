#ifndef CARC
#define CARC 0

using namespace std;

class CArc {
private:
	// Attributs
	unsigned int uiARCDestination;// Num�ro du sommet destination

public:
	//Methodes

	//Constructeur par defaut
	CArc();
	//Constructeur par recopie
	CArc(CArc &ARCArg);

	/*
	   * Entr�e : le nombre du sommet destination
	   * Sortie : rien
	   * Pr�-condition : rien
	   * Post-condition : creer un arc et met a jour son nombre
	  */
	CArc(unsigned int uiDestination);

	/*
	   * Entr�e : Un Arc ARCArg
	   * Sortie : Un bool�en
	   * Pr�-condition : Aucune
	   * Post-condition : Egalit� des deux arc
	   */
	bool operator==(CArc &ARCArg);

	/*
	   * Entr�e : rien
	   * Sortie : un naturel
	   * Pr�-condition : Aucune
	   * Post-condition : recupere le numero du sommet destination
	   */
	unsigned int ARCGetDestination();

	/*
	   * Entr�e : Le numero du sommet destination
	   * Sortie : rien
	   * Pr�-condition : Aucune
	   * Post-condition : met a jour le numero du sommet
	   */
	void ARCSetDestination(unsigned int uiNumero);

	//Methode d'affichage d'un arc
	void ARCAfficher();

};

#endif