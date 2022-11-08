int ajouter_liste_electorale(char * filename, liste_electorale l )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %d %d %s %d-%d-%d \n",
          l.lid_liste , 
          l.ID1 , l.ID2 , 
          l.ID3 , 
          l.orientation , 
          l.date_creation.jour ,l.date_creation.mois ,l.date_creation.annee );
        fclose(f);
        return 1;
    }
    else return 0;
}