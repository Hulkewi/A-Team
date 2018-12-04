#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "greeting.h"

void
on_button1_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
	int x;
	GtkWidget *a,*b,*c,*Mywindow1,*Mywindow2;
	GtkWidget *output;
	char Login[20];char password[20];
	FILE* f;
	Mywindow1=lookup_widget(objet_graphique,"Mywindow1");
	a=lookup_widget(objet_graphique,"entry1");
	b=lookup_widget(objet_graphique,"entry2");
	c=lookup_widget(objet_graphique,"label4");
	strcpy(Login,gtk_entry_get_text(GTK_ENTRY(a)));
	strcpy(password,gtk_entry_get_text(GTK_ENTRY(b)));
	x=verifier(Login,password);
if(x==1){
Mywindow2=create_Mywindow2();
gtk_widget_show(Mywindow2);
gtk_widget_hide(Mywindow1);
}
	else
	{ gtk_label_set_text(GTK_LABEL(c),"authentification non validée");}
}


void
on_button2_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{	GtkWidget *Mywindow2,*Mywindow3;
Mywindow3=lookup_widget(objet_graphique,"Mywindow3");
Mywindow3=create_Mywindow3();
gtk_widget_show(Mywindow3);
gtk_widget_hide(Mywindow2);


}
void
on_button7_clicked			(GtkWidget       *objet_graphique,
                                        gpointer         user_data)

{	GtkWidget *Mywindow1,*Mywindow2;
Mywindow2=lookup_widget(objet_graphique,"Mywindow2");
Mywindow1=create_Mywindow1();
gtk_widget_show(Mywindow1);
gtk_widget_hide(Mywindow2);

}

void
on_button3_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{	GtkWidget *Mywindow2,*Mywindow4;
Mywindow4=lookup_widget(objet_graphique,"Mywindow4");
Mywindow4=create_Mywindow4();
gtk_widget_show(Mywindow4);
gtk_widget_hide(Mywindow2);

}


void
on_button4_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{	GtkWidget *Mywindow2,*Mywindow5;
Mywindow5=lookup_widget(objet_graphique,"Mywindow5");
Mywindow5=create_Mywindow5();
gtk_widget_show(Mywindow5);
gtk_widget_hide(Mywindow2);

}


void
on_button5_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{	GtkWidget *Mywindow2,*Mywindow6;
Mywindow6=lookup_widget(objet_graphique,"Mywindow6");
Mywindow6=create_Mywindow6();
gtk_widget_show(Mywindow6);
gtk_widget_hide(Mywindow2);

}


void
on_button6_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button8_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button10_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button11_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button9_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button18_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *nom;
GtkWidget *prenom;
GtkWidget *age;
GtkWidget *sexe;
GtkWidget *poids;
GtkWidget *taille;
GtkWidget *cin;
GtkWidget *password;
GtkWidget *date_dabonnement;
GtkWidget *jours;
GtkWidget *mois;
GtkWidget *annee;

Date dt_nais;
admin s;
jours=lookup_widget(objet_graphique,"spinbutton1");
mois=lookup_widget(objet_graphique,"spinbutton2");
annee=lookup_widget(objet_graphique,"spinbutton3");
password=lookup_widget(objet_graphique,"entry9");
cin=lookup_widget(objet_graphique,"entry10");
nom=lookup_widget(objet_graphique,"entry3");
prenom=lookup_widget(objet_graphique,"entry4");
age=lookup_widget(objet_graphique,"entry5");
sexe=lookup_widget(objet_graphique,"entry6");
poids=lookup_widget(objet_graphique,"entry7");
taille=lookup_widget(objet_graphique,"entry8");
s.dt_nais.jours=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jours));
s.dt_nais.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
s.dt_nais.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));
strcpy(s.username,gtk_entry_get_text(GTK_ENTRY(cin)));
strcpy(s.password,gtk_entry_get_text(GTK_ENTRY(password)));
strcpy(s.nom,gtk_entry_get_text(GTK_ENTRY(nom)));
strcpy(s.prenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
ajouter1(s);

}


void
on_button19_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{	GtkWidget *Mywindow2,*Mywindow3;
Mywindow3=lookup_widget(objet_graphique,"Mywindow3");
gtk_widget_show(Mywindow2);
gtk_widget_hide(Mywindow3);

}


void
on_button14_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button17_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{	GtkWidget *Mywindow2,*Mywindow6;
Mywindow6=lookup_widget(objet_graphique,"Mywindow6");
gtk_widget_show(Mywindow2);
gtk_widget_hide(Mywindow6);


}


void
on_button20_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button21_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}


void
on_button15_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *Mywindow2,*Mywindow5;
Mywindow5=lookup_widget(objet_graphique,"Mywindow5");
gtk_widget_show(Mywindow2);
gtk_widget_hide(Mywindow5);

}


void
on_button13_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{GtkWidget *Mywindow4,*Mywindow2;
Mywindow4=lookup_widget(objet_graphique,"Mywindow4");

gtk_widget_show(Mywindow2);
gtk_widget_hide(Mywindow4);
}


void
on_button12_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

}

