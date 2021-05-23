#ifndef CSOM
#define CSOM 0

#include "CArc.h"
using namespace std;

class CSommet {
private:
	unsigned int uiSOMNumeroS;
	CArc** pSOMArcArrivant;
	unsigned int uiSOMTailleArrivant;
	CArc** pSOMArcPartant;
	unsigned int uiSOMTaillePartant;

public:

	//Constructeur par defaut
	CSommet();

	//Constructeur par recopie
	CSommet(CSommet &SOMArg);

	//Destructeur par defaut
	~CSommet();

	/*
	   * Entr�e : rien
	   * Sortie : Le numero du sommet
	   * Pr�-condition : rien
	   * Post-condition : rien
	  */
	unsigned int SOMGetNumero();

	/*
	   * Entr�e : Numero a donner pour le sommet
	   * Sortie : rien
	   * Pr�-condition : rien
	   * Post-condition : met a jour le numero du sommet
	  */
	void SOMSetNumero(unsigned int uiSOMArg);

	/*
	   * Entr�e : rien
	   * Sortie : La liste des arcs arrivant
	   * Pr�-condition : rien
	   * Post-condition : rien
	  */
	CArc** SOMGetArcArrivant();

	/*
	   * Entr�e : Liste d'arcs arrivant
	   * Sortie : rien
	   * Pr�-condition : rien
	   * Post-condition : Met a jour la liste des arcs arrivant
	  */
	void SOMSetArcArrivant(CArc** pSOMArg);

	/*
	   * Entr�e : rien
	   * Sortie : La liste des arcs partant
	   * Pr�-condition : rien
	   * Post-condition : rien
	  */
	CArc** SOMGetArcPartant();

	/*
	   * Entr�e : Liste d'arcs partant
	   * Sortie : rien
	   * Pr�-condition : rien
	   * Post-condition : Met a jour la liste des arcs partant
	  */
	void SOMSetArcPartant(CArc** pSOMArg);

	/*
	   * Entr�e : Numero du sommet destination
	   * Sortie : rien
	   * Pr�-condition : rien
	   * Post-condition : Ajout l'arc de destination ARCarg dans                        la liste des arcs partant
	  */
	void SOMAjouterArcPartant(int ARCarg);

	/*
	   * Entr�e : Numero du sommet destination
	   * Sortie : rien
	   * Pr�-condition : rien
	   * Post-condition : Supprime l'arc de destination ARCarg dans                     la liste des arcs partant
	  */
	void SOMSupprimerArcPartant(int ARCarg);

	/*
	   * Entr�e : Numero du sommet destination
	   * Sortie : rien
	   * Pr�-condition : rien
	   * Post-condition : Ajout l'arc de destination ARCarg dans                        la liste des arcs arrivant
	  */
	void SOMAjouterArcArrivant(int ARCarg);

	/*
	   * Entr�e : Numero du sommet destination
	   * Sortie : rien
	   * Pr�-condition : rien
	   * Post-condition : Supprime l'arc de destination ARCarg dans                     la liste des arcs arrivant
	  */
	void SOMSupprimerArcArrivant(int ARCarg);

	//Methode d'affichage d'un sommet
	void SOMAffichage();
};
#endif
