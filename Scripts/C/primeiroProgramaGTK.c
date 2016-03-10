/*
 * autor: Anderson;
 * data: 25/02/2016 17:38;
 * 
*/
#include <gtk/gtk.h>

void sair(GtkWidget*, gpointer);
void click(GtkWidget*,gpointer);

int main(int argc, char **argv)
{
	
	GtkWidget *janela,*entry,*button,*bar;
	
	gtk_init(&argc, &argv);
	janela = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW (janela), "Alo Mundo");
	gtk_signal_connect(GTK_OBJECT(janela),"destroy",GTK_SIGNAL_FUNC(sair),NULL);
	
	entry = gtk_entry_new();	
	
	button = gtk_button_new_with_label("Ok");
	gtk_signal_connect(GTK_OBJECT(button),"clicked",GTK_SIGNAL_FUNC(click),NULL);
	
	bar = gtk_action_bar_new();
	gtk_action_bar_pack_start (GTK_ACTIONBAR(bar),button);
	
	gtk_container_add(GTK_CONTAINER(janela),bar);	
	
	gtk_widget_show(janela);	
	gtk_widget_show(bar);
	//gtk_widget_show(entry);
	gtk_widget_show(button);
	
	gtk_main();
	
	return 0;
}

void sair(GtkWidget *w, gpointer p)
{
	gtk_main_quit();		
}

void click(GtkWidget *w, gpointer p)
{
	g_print("OK deu certo!\n");		
}
