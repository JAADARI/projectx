#include <bits/stdc++.h>

using namespace std;
void  add_score(int score_winner,string winner_name)
{
    FILE * score_file=NULL;
    string chaine;
    int score[3]={0};
    int nbr[3]={0};
    string name_0={0};
    string name_1={0};
    string name_2={0};
    int temp;
    string name_temp;
    //ouverture du fichier en mode lecture
    score_file= fopen("/score/score.txt","r");
    if (score_file!=NULL)
    {
        fscanf(score_file, "%d %s %d %d %s %d %d %s %d", &score[0],&name_0,&nbr[0],&score[1],&name_1,&nbr[1],&score[2],&name_2,&nbr[2]);
        fclose(score_file);
    }
    else
    {
        cout<<"ouverture en lecture est impossible"<<endl;
    }
    //si son nom est identique au premier
    if(winner_name==name_0)
    {
        nbr[0]++;
        //s'il bat son score precedent , on actualise:
        if(score_winner>score[0])
        {
            score[0]=score_winner;
            cout<<"vous avez amélioré votre score du 1er"<<endl;

        }
    }else
    {
        //si son nom est identique au 2eme
        if(winner_name==name_1)
        {
            nbr[1]++;
            //s'il bat son score precedent , on actualise
            if(score_winner>score[1])
            {
                score[1]=score_winner;
                cout<<"vous avez amelioré votre score de 2eme"<<endl;
                //si son nouveau score est plus grand que celui du 1er , on actualise la positin
                if(score[1]>score[0])
                {
                    //inversement du 1er et du 2eme
                    temp=score[0];
                    score[0]=score[1];
                    score[1]=temp;

                    temp=nbr[0];
                    nbr[0]=nbr[1];
                    nbr[1]=temp;
                    cout<<"vous avez depassé votre ancien score"<<endl;
                }
            }
        }
        else
        {
            // Alors si son nom est identique au 3e
            if(winner_name==name_2){
                nbr[2]++;

                // s'il bat son score précédent, on actualise
                if(score_winner > score[2]){
                    score[2] = score_winner;

                    // Si son nouveau score est plus grand que celui du 1er on actualise les positions
                    if(score[2] > score[0]){

                        // on passe le 3e, 1er et le 2e en 3e
                        score[2] = score[1];
                        score[1] = score[0];
                        score[0] = score_winner;

                        temp = nbr[2];
                        nbr[2] = nbr[1];
                        nbr[1] = nbr[0];
                        nbr[0] = temp;

                        name_2=name_1;
                        name_1=name_0;
                        name_0=winner_name;

                        cout<<" vous avez dépassé votre ancien score et passez de 3e à 1er!"<<endl;
                    }
                    else{
                        // Si son nouveau score est plus grand que celui du 2e
                        if(score[2] > score[1]){

                            // on inverse les 2
                            temp = score[1];
                            score[1] = score[2];
                            score[2] = temp;

                            temp = nbr[1];
                            nbr[1] = nbr[2];
                            nbr[2] = temp;

                            name_temp=name_1;
                            name_1=name_2;
                            name_2=name_temp;

                            cout<<" Bravo, vous avez dépassé votre ancien score et passez 2e!"<<endl;
                        }
                    }
                }
            }
                // Son nom ne correspond a aucun enregistré
            else{
                // Il dépasse le score du premier
                if(score_winner > score[0]){
                    score[2] = score[1];
                    score[1] = score[0];
                    score[0] = score_winner;

                    nbr[2] = nbr[1];
                    nbr[1] = nbr[0];
                    nbr[0] = 0;

                    name_2=name_1;
                    name_1=name_0;
                    name_0=winner_name;

                    cout<<" Le score obtenu vous mène à la 1ère place!"<<endl;
                }
                    // il depasse le score du deuxieme
                else{
                    if(score_winner > score[1]){
                        score[2] = score[1];
                        score[1] = score_winner;

                        nbr[2] = nbr[1];
                        nbr[1] = 0;

                        name_2=name_1;
                        name_1=winner_name;

                        cout<<" Le score obtenu vous mène a la 2e place!"<<endl;
                    }
                        // il dépasse le score du 3e
                    else{
                        if(score_winner > score[2]){
                            score[2] = score_winner;
                            nbr[2] = 0;
                            name_2=winner_name;

                            cout<<" Le score obtenu vous mène à la 3e place !"<<endl;
                        }
                        else{
                            cout<<" Le score obtenu n'est pas suffisant pour obtenir une place!"<<endl;
                        }
                    }
                }
            }
        }
    }

    score_file= fopen("./data/score.txt", "w");

    if (score_file != NULL){
        fprintf(score_file, "%d %s %d %d %s %d %d %s %d", score[0], &name_0, nbr[0], score[1], &name_1, nbr[1], score[2], &name_2, nbr[2]);
        fclose(score_file);
    }
    else{
        cout<<" Ouverture du fichier impossible - réécriture"<<endl;
    }
}