#ifndef CPARSER_H
#define CPARSER_H 0

#include <iostream>
#include <fstream> 
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include "CException.h"

#define EXC_Failed_open_file 0


class CParser
{
	//Attributs
private:
	char* pcPARNom_fichier;
	unsigned int uiPARNombreSommet;
	unsigned int uiPARNombreArc;
	//tableau contenant tous les sommets
	unsigned int * piPARSommet;
	//tableau contenant tous les arcs (tableau de tableau)
	unsigned int ** puiPARArc;


	/***********************************************************************************************************************
														CONSTRUCTEURS ET DESTRUCTEURS
	***********************************************************************************************************************/

public:

	//Constructeur par d�faut
	CParser();
	/*Constructeur de confort
	entree : char* STRNomFichier : cha�ne de caract�re contenant le nom du fichier
	Sortir ; rien
	Pr�-condition : la cha�ne de caract�re pass�e en entr�e correspond au chemin d'acc�s du fichier
	Post-condition : Instancie un CParser avec le nom du fichier
	*/
	CParser(char* pcArg);
	//destructeur
	~CParser();


	/***********************************************************************************************************************
														   ACCESSEURS
	***********************************************************************************************************************/
	//Accesseur en ecriture
	/*
	entree : char* STRNomFichier : cha�ne de caract�re contenant le nom du fichier
	sortie : rien
	Pr�-condition : la cha�ne de caract�re pass�e en entr�e correspond au chemin d'acc�s du fichier
	Post-condition : initialise le nom du fichier
	*/
	void PARSetNomFichier(char* STRArg);

	/*Accesseur en lecture*/
	/*
	entree : rien
	sortie : CString STRPARNom_fichier
	Pr�-condition : rien
	Post-condition : rien
	*/
	char* PARGetNomFichier();

	/*
	entree : rien
	sortie : unsigned int uiPARNombreSommet
	Pre-condition: rien
	Post-condition : rien
	*/
	unsigned int PARGetNombreSommet();

	/*
	entree : rien
	sortie : unsigned int uiPARNombreArc
	Pre-condition: rien
	Post-condition : rien
	*/
	unsigned int PARGetNombreArc();

	/*
	entree : rien
	sortie : unsigned int piPARSommet[]
	Pre-condition: rien
	Post-condition : rien
	*/
	unsigned int * PARGetSommet();

	/*
	entree : rien
	sortie : (unsigned int)** puiPARArc
	Pre-condition: rien
	Post-condition : rien
	*/
	unsigned int ** PARGetArc();

	/*
	entree : rien
	sortie : rien
	Pre-condition: Le fichier respecte le bon format
	Post-condition : Parse le fichier
	*/

	void PARLecture();
};

#endif
