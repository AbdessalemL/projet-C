#ifndef PRIJET_C_H_INCLUDED
#define PRIJET_C_H_INCLUDED
#define STRUCTURE_H_INCLUDED
typedef struct date_type
{
    int jour;
    int mois;
    int annee;
} date_type;


typedef struct liste_electorale
{
    int id_liste;
    int ID1;
    int ID2;
    int ID3;
    char orientation[7];
    date_type date_creation;
}liste_electorale;

typedef struct vote
{
    int ID_liste;
    int ID_electeur;
}vote;

// tous ses fonctions return :
//   1 : si le fichier existe
//   0 : si le fichier n'existe pas

int ajouter_liste_electorale( char*, liste_electorale);               // "liste_electorale.txt" | liste_electorale
int modifier_liste_electorale( char*, int ,liste_electorale);         // "liste_electorale.txt" | id_liste | liste_electorale
int supprimer_liste_elecotrale( char*, int);                          // "liste_electorale.txt" | id_liste
int chercher_liste_electorale(char*,int);                             // "liste_electorale.txt" | id_liste 
int chercher_tous_les_listes_electorale(char *, liste_electorale * ); // "liste_electorale.txt" | [liste_electorale]

int ajouter_vote( char*, int,int);       // "liste_des_votes.txt" | id_utilisateur |id_liste_electorale
int modifier_vote( char*, int,int);      // "liste_des_votes.txt" | id_utilisateur |id_liste_electorale
int chercher_vote( char*, int);          // "liste_des_votes.txt" | id_utilisateur
int chercher_tous_les_votes( char*);     // "liste_des_votes.txt" 

#endif // PRIJET_C_H_INCLUDED